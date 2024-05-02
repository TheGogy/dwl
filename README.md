# My dwl config files

Make sure to add the programs in [`bin`](./bin/) to your `/usr/local/bin`!

## Adding blocks

To add blocks and update signals, add the required block to [`blocks.h`](./someblocks/blocks.h) and set the update signal to something unique. To then update it, you just need to run the following command:

```bash
kill -<m> $(pidof someblocks) # where <m> is n + 34.
```
