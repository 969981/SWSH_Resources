/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008018a0; name: pbackfail
 */


/* std::stringbuf::pbackfail(int) */

int __thiscall std::stringbuf::pbackfail(stringbuf *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar2) {
    *(ulong *)(this + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x10) < uVar2) {
    if (param_1 == -1) {
      *(ulong *)(this + 0x18) = uVar2 - 1;
      *(ulong *)(this + 0x20) = uVar1;
      return 0;
    }
    if ((((byte)this[0x60] >> 4 & 1) != 0) || ((uint)*(byte *)(uVar2 - 1) == (param_1 & 0xffU))) {
      *(undefined1 **)(this + 0x18) = (undefined1 *)(uVar2 - 1);
      *(ulong *)(this + 0x20) = uVar1;
      *(undefined1 *)(uVar2 - 1) = (char)param_1;
      return param_1;
    }
  }
  return -1;
}


