class CreateRoomMessages < ActiveRecord::Migration[6.0]
  def change
    create_table :room_messages do |t|
      t.references :room, null: false, foreign_key: true
	  t.references :user, null: false, foreign_key: true
	  t.belongs_to :game
	  t.text :content

      t.timestamps
    end
  end
end
