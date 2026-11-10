/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117f8e0; name: FUN_0117f8e0
 */


void FUN_0117f8e0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_588;
  undefined1 local_580 [384];
  char local_400 [8];
  long local_3f8 [47];
  undefined1 auStack_280 [608];
  
  if ((*(int *)(param_1 + 0x68) == 0) ||
     (iVar1 = *(int *)(param_1 + 0x68) + -1, *(int *)(param_1 + 0x68) = iVar1, iVar1 != 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 100;
  puVar2 = PTR_DAT_02710958;
  FUN_01210ee0(*(undefined8 *)PTR_DAT_02710958);
  FUN_01211940(auStack_280,*(undefined8 *)puVar2);
  FUN_011f8900(local_400,auStack_280,1);
  if (local_400[0] != '\0') {
    uVar3 = (**(code **)(local_3f8[0] + 0x10))(local_3f8);
    local_588 = 0x10b;
    FUN_007c1fa0(local_580,uVar3,&local_588);
    uVar4 = *(undefined8 *)PTR_DAT_027185f8;
    uVar3 = FUN_007c2320(local_580);
    FUN_0120e570(uVar4,uVar3,0x168);
  }
  return;
}


