/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008016c0; name: seekoff
 */


/* std::stringbuf::seekoff(long long, std::ios_base::seekdir, unsigned int) */

undefined1  [16] __thiscall
std::stringbuf::seekoff(stringbuf *this,ulong param_1,int param_3,uint param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(this + 0x30);
  uVar4 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar5) {
    *(ulong *)(this + 0x58) = uVar5;
    uVar4 = uVar5;
  }
  if ((param_4 & 0x18) == 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if ((param_3 == 1) && ((param_4 & 0x18) == 0x18)) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  if (uVar4 == 0) {
    lVar6 = 0;
  }
  else if (((byte)this[0x40] & 1) == 0) {
    lVar6 = uVar4 - (long)(this + 0x41);
  }
  else {
    lVar6 = uVar4 - *(long *)(this + 0x50);
  }
  if (param_3 != 0) {
    lVar2 = lVar6;
    if (param_3 != 2) {
      if (param_3 != 1) {
        return ZEXT816(0xffffffffffffffff) << 0x40;
      }
      if ((param_4 >> 3 & 1) == 0) {
        param_1 = (uVar5 - *(long *)(this + 0x28)) + param_1;
        goto joined_r0x008017b0;
      }
      lVar2 = *(long *)(this + 0x18) - *(long *)(this + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
joined_r0x008017b0:
  uVar3 = 0xffffffffffffffff;
  if ((-1 < (long)param_1) && (uVar3 = 0xffffffffffffffff, (long)param_1 <= lVar6)) {
    if (param_1 != 0) {
      if (((param_4 >> 3 & 1) != 0) && (*(long *)(this + 0x18) == 0)) {
        return ZEXT816(0xffffffffffffffff) << 0x40;
      }
      if (((param_4 >> 4 & 1) != 0) && (uVar5 == 0)) {
        return ZEXT816(0xffffffffffffffff) << 0x40;
      }
    }
    if ((param_4 >> 3 & 1) != 0) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + param_1;
      *(ulong *)(this + 0x20) = uVar4;
    }
    if ((param_4 >> 4 & 1) != 0) {
      *(long *)(this + 0x30) = *(long *)(this + 0x28) + (long)(int)param_1;
    }
    uVar3 = param_1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}


