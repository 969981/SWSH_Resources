/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077dea0; name: FUN_0077dea0
 */


ulong FUN_0077dea0(long param_1,ulong param_2,ushort *param_3,ulong param_4)

{
  size_t __n;
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ushort uVar4;
  ulong uVar5;
  undefined1 local_44;
  byte local_43;
  byte local_42;
  undefined1 local_41;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = 0;
  uVar4 = *param_3;
  uVar1 = 0;
  while (uVar4 == 0x10) {
    param_3 = param_3 + (ulong)param_3[1] + 2;
    uVar3 = uVar1;
LAB_0077def8:
    uVar1 = uVar3;
    uVar4 = *param_3;
  }
  if (uVar4 != 0) {
    __n = 2;
    if (0x7ff < uVar4) {
      __n = 3;
    }
    if (uVar4 < 0x80) {
      __n = 1;
    }
    iVar2 = (int)__n;
    if (iVar2 == 3) {
      local_43 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
      local_42 = (byte)uVar4 & 0x3f | 0x80;
      uVar4 = uVar4 >> 0xc | 0xffe0;
LAB_0077df6c:
      local_44 = (undefined1)uVar4;
      local_41 = 0;
    }
    else {
      if (iVar2 == 2) {
        local_42 = 0;
        local_43 = (byte)uVar4 & 0x3f | 0x80;
        uVar4 = uVar4 >> 6 | 0xffc0;
        goto LAB_0077df6c;
      }
      if (iVar2 == 1) {
        local_43 = 0;
        local_42 = 0;
        goto LAB_0077df6c;
      }
    }
    uVar3 = __n + uVar1;
    if (uVar3 < param_2) {
      memcpy((void *)(param_1 + uVar1),&local_44,__n);
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 1;
      if (uVar5 < param_4) goto LAB_0077def8;
      goto LAB_0077dfb0;
    }
  }
  uVar3 = uVar1;
LAB_0077dfb0:
  *(undefined1 *)(param_1 + uVar3) = 0;
  return uVar3;
}


