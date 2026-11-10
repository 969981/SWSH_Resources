/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ebc0; name: FUN_0040ebc0
 */


void FUN_0040ebc0(long param_1,uint param_2,uint param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if ((int)param_2 < 0) {
    if (-param_2 < param_3) {
      param_3 = param_3 + param_2;
      param_2 = 0;
      goto LAB_0040ec00;
    }
  }
  else {
LAB_0040ec00:
    uVar1 = *(int *)(*(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0xc) -
            *(int *)(*(long *)(param_1 + 0xe8) + 4);
    if ((param_3 + param_2 <= uVar1) ||
       (param_3 = uVar1 - param_2, param_2 <= uVar1 && param_3 != 0)) {
      lVar5 = FUN_0040a140();
      uVar1 = *(uint *)(lVar5 + 8);
      iVar6 = 0;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar1 + param_2) / uVar1;
        }
        uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + param_3) / uVar1;
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar2 / uVar1;
        }
        iVar6 = uVar3 - uVar4;
      }
      *param_4 = iVar6;
      uVar1 = *(uint *)(lVar5 + 4);
      iVar6 = 0;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar1 + param_2) / uVar1;
        }
        uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + param_3) / uVar1;
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar2 / uVar1;
        }
        iVar6 = uVar3 - uVar4;
      }
      *param_5 = iVar6;
      uVar1 = *(uint *)(lVar5 + 0xc);
      iVar6 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar1 + param_2) - *(int *)(lVar5 + 0x10);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = (uVar1 + (uVar2 - uVar3 * uVar1)) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + param_3) / uVar1;
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar2 / uVar1;
        }
        iVar6 = uVar3 - uVar4;
      }
      goto LAB_0040ecd4;
    }
  }
  iVar6 = 0;
  *param_4 = 0;
  *param_5 = 0;
LAB_0040ecd4:
  *param_6 = iVar6;
  return;
}


