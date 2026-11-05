# Tool dependency policy

External parsers and reverse-engineering utilities must be documented with upstream URL, license, pinned revision, intended formats, and validation samples before being linked, vendored or invoked from CI. No git submodules or third-party binaries have been imported by this scaffold.

Potential follow-up work: inspect suitable SWSH-capable parsers and tools (e.g. pkNX/Switch-Toolbox/gftool) on real sample formats; do not assume any of them support all archived extensions or reuse Scarlet/Violet Trinity routines.
