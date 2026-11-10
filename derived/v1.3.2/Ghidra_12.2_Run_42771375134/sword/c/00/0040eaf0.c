/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040eaf0; name: FUN_0040eaf0
 */


void FUN_0040eaf0(long param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  puVar4 = PTR_DAT_02712ad0;
  lVar5 = *(long *)(param_1 + 0xe8);
  uVar6 = *(int *)(lVar5 + 4) + param_4;
  uVar1 = uVar6 + param_5;
  if ((int)uVar6 < 0) {
    if ((int)uVar1 < 1) {
      return;
    }
    uVar6 = 0;
    iVar2 = *(int *)(param_1 + 0xf0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xf0);
  }
  if (iVar2 == 2) {
    return;
  }
  uVar7 = 2;
  while( true ) {
    uVar3 = *(uint *)(lVar5 + (ulong)(uVar7 - 1) * 0x10 + 4);
    if (uVar6 <= uVar3) {
      if (uVar1 <= uVar3) {
        return;
      }
      FUN_0048f790(*(undefined8 *)puVar4,param_2,param_3,
                   *(undefined8 *)(lVar5 + (ulong)(uVar7 - 1) * 0x10 + 8));
    }
    if (iVar2 - 2U < uVar7) break;
    lVar5 = *(long *)(param_1 + 0xe8);
    uVar7 = uVar7 + 1;
  }
  return;
}


