SELECT p.post_id,
    p.caption,
    i.name
FROM posts p
    RIGHT JOIN influencers i ON p.influencer_id = i.influencer_id;