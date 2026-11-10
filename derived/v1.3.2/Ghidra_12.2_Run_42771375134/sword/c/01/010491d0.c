/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010491d0; name: FUN_010491d0
 */


void FUN_010491d0(ulong *param_1,long param_2,char param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auStack_8d0 [2176];
  
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (ulong)*(uint *)(param_2 + 0xae8);
  if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    memset(auStack_8d0,0,0x87f);
  }
  if ((param_4 & 0xff) != 0) {
    param_1[9] = param_4 >> 0x20;
  }
  param_1[10] = (ulong)*(uint *)(param_2 + 4);
  plVar4 = *(long **)(param_2 + (ulong)*(byte *)(param_2 + 0x3ba) * 8 + 0x418);
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00884820(plVar4), iVar1 != 0)) {
    uVar5 = 0;
    do {
      lVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,uVar5 & 0xffffffff);
      if (lVar2 != 0) {
        uVar3 = FUN_008783b0();
        param_1[uVar5 + 0xb] = uVar3 & 0xffffffff;
        uVar3 = FUN_008783c0(lVar2);
        param_1[uVar5 + 0x11] = uVar3 & 0xffff;
      }
      uVar5 = uVar5 + 1;
      uVar3 = FUN_00884820(plVar4);
    } while (uVar5 < (uVar3 & 0xffffffff));
  }
  return;
}


