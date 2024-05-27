# My dwl config files

Make sure to add the programs in [`bin`](./bin/) to your `/usr/local/bin`!

> [!NOTE]
> This setup is for Nvidia, you may need to comment out some environment variables in `config.h`.

## Adding blocks

To add blocks and update signals, add the required block to [`blocks.h`](./someblocks/blocks.h) and set the update signal to something unique. To then update it, send this signal to the bar using `kill`.
```bash
kill -n $(pidof someblocks) # where <n> is the unique update signal + 34.
```
