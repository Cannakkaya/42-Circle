class CreateFriendships < ActiveRecord::Migration[6.0]
  def change
    create_table :friendships do |t|
		t.references :user, index: true, foreign_key: true
		t.references :friend, index: true
      t.timestamps
	end
	add_foreign_key :friendships, :users, column: :friend_id
  end
end
