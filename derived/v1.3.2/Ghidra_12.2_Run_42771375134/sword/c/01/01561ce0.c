/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01561ce0; name: FUN_01561ce0
 */


void FUN_01561ce0(uint *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_02710798;
  if (*(long *)(param_1 + 2) != 0) {
    uVar3 = *param_1;
    if (uVar3 < 5 && (1 << (ulong)(uVar3 & 0x1f) & 0x16U) != 0) {
      local_24 = 0;
      FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
      FUN_0155b480();
      local_24 = 0;
      lVar2 = FUN_0153bf80(*(undefined8 *)puVar1,&local_24);
      *(undefined1 *)(lVar2 + 0x98) = 1;
      uVar3 = *param_1;
    }
    puVar1 = PTR_DAT_02710798;
    if (uVar3 - 3 < 2) {
      local_24 = 1;
      FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
      FUN_0155b480();
      local_24 = 1;
      lVar2 = FUN_0153bf80(*(undefined8 *)puVar1,&local_24);
      *(undefined1 *)(lVar2 + 0x98) = 1;
    }
    FUN_006d0560(*(undefined8 *)(param_1 + 2),"save process",0xffffffff,0x10);
  }
  return;
}


