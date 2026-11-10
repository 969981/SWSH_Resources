/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801840; name: underflow
 */


/* std::stringbuf::underflow() */

ulong __thiscall std::stringbuf::underflow(stringbuf *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 0x30);
  pbVar1 = *(byte **)(this + 0x58);
  if (*(byte **)(this + 0x58) < pbVar2) {
    *(byte **)(this + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if (((byte)this[0x60] >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  pbVar2 = *(byte **)(this + 0x20);
  if (*(byte **)(this + 0x20) < pbVar1) {
    *(byte **)(this + 0x20) = pbVar1;
    pbVar2 = pbVar1;
  }
  if (*(byte **)(this + 0x18) < pbVar2) {
    return (ulong)**(byte **)(this + 0x18);
  }
  return 0xffffffff;
}


