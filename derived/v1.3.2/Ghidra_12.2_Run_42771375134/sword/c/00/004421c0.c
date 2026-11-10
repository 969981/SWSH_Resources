/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004421c0; name: FUN_004421c0
 */


undefined8 FUN_004421c0(undefined8 *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  sVar1 = strlen(param_2);
  sVar2 = strlen(param_3);
  if (sVar1 <= sVar2) {
LAB_00442264:
    uVar3 = FUN_00442070(param_1,param_2,param_3);
    return uVar3;
  }
  if (sVar2 != 0) {
    uVar4 = 0;
    do {
      if (param_2[uVar4 + (sVar1 - sVar2)] != param_3[uVar4]) goto LAB_00442264;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < sVar2);
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return 1;
}


