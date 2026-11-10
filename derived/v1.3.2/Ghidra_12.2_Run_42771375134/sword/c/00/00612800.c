/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00612800; name: FUN_00612800
 */


void FUN_00612800(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  lVar1 = param_1[5];
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      FUN_006028c0(param_2,*puVar3);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (iVar2 != 0);
    lVar1 = param_1[5];
  }
  FUN_006028c0(param_2,lVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = *(int *)((long)param_1 + 0x14);
  lVar1 = param_1[3];
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      FUN_006028c0(param_2,*puVar3);
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (iVar2 != 0);
    lVar1 = param_1[3];
  }
  FUN_006028c0(param_2,lVar1);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_006028c0(param_2,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


