SELECT p.caption,
    i.name
FROM posts p
    INNER JOIN influencers i ON p.influencer_id = i.influencer_id;