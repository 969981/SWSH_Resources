/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b1490; name: FUN_013b1490
 */


undefined8 FUN_013b1490(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_012e3520(lVar3);
    uVar1 = FUN_012ba190(*puVar2);
    FUN_012e7d50(lVar3,uVar1,1);
    puVar2 = (undefined8 *)FUN_012e3520(lVar3);
    uVar1 = FUN_012ba220(*puVar2);
    FUN_012e5a10(DAT_01d4c708,lVar3,uVar1,0);
    local_40 = 0x938e665d908d3199;
    uStack_38 = 0;
    FUN_0130fad0(lVar3,&local_40,0);
  }
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_012e3520(lVar3);
    uVar1 = FUN_012ba190(*puVar2);
    FUN_012e7d50(lVar3,uVar1,1);
    puVar2 = (undefined8 *)FUN_012e3520(lVar3);
    uVar1 = FUN_012ba220(*puVar2);
    FUN_012e5a10(DAT_01d4c708,lVar3,uVar1,0);
    local_40 = 0x938e665d908d3199;
    uStack_38 = 0;
    FUN_0130fad0(lVar3,&local_40,0);
  }
  return 1;
}


