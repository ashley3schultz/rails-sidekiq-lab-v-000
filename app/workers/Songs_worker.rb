class SongsWorker
  require 'csv'
  include Sideiq::Worker

  def perform(file)
    CSV.foreach(file, headers: true) do |song|
      artist = Artist.find_or_create_by(name: song[1])
      Song.create(title: song[0], artist_id: artist.id)
    end
  end
end 
