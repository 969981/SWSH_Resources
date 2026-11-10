/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136bc90; name: FUN_0136bc90
 */


void FUN_0136bc90(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  puVar5 = (undefined8 *)FUN_012e3520(param_2);
  uVar3 = FUN_012b68c0(*puVar5);
  if ((*(uint *)(param_3 + 8) < uVar3) ||
     ((uVar6 = FUN_012ea960(param_2), (uVar6 & 1) != 0 &&
      (cVar1 = FUN_012ea9a0(param_2), cVar1 != *(char *)(param_3 + 0x14))))) {
    *(undefined1 *)(param_3 + 0xc) = 1;
    puVar5 = (undefined8 *)FUN_012e3520(param_2);
    uVar4 = FUN_012b68c0(*puVar5);
    *(undefined4 *)(param_3 + 8) = uVar4;
    *(undefined4 *)(param_3 + 0x10) = 0;
    uVar2 = FUN_012ea9a0(param_2);
    *(undefined1 *)(param_3 + 0x14) = uVar2;
  }
  return;
}


