/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011aa700; name: FUN_011aa700
 */


void FUN_011aa700(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  if (DAT_02a64a28 != 2) {
    local_28 = 0;
    local_38 = PTR_DAT_02716670 + 0x10;
    puStack_30 = PTR_LAB_027254a8;
    FUN_00801c10(&DAT_02a64a28,&local_38);
    FUN_00801390(&local_38);
  }
  uVar2 = DAT_02a649f8;
  puVar1 = PTR_DAT_02725470;
  lVar3 = *(long *)PTR_DAT_02725470;
  if (lVar3 == 0) {
    FUN_011aa540();
    lVar3 = *(long *)puVar1;
  }
  FUN_00818720(uVar2,lVar3);
  uVar2 = DAT_02a64a08;
  puVar1 = PTR_DAT_02725478;
  lVar3 = *(long *)PTR_DAT_02725478;
  if (lVar3 == 0) {
    FUN_011aa540();
    lVar3 = *(long *)puVar1;
  }
  FUN_00818720(uVar2,lVar3);
  uVar2 = DAT_02a64a18;
  puVar1 = PTR_DAT_02725480;
  lVar3 = *(long *)PTR_DAT_02725480;
  if (lVar3 == 0) {
    FUN_011aa540();
    lVar3 = *(long *)puVar1;
  }
  FUN_00818720(uVar2,lVar3);
  return;
}


