/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042c060; name: FUN_0042c060
 */


void FUN_0042c060(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_02712d10;
  if (*(undefined **)(PTR_DAT_02712d10 + 8) != (undefined *)0x0) {
    bVar3 = *(undefined **)(PTR_DAT_02712d10 + 8) != PTR_DAT_02712d10;
    *(undefined4 *)(PTR_DAT_02712d10 + 0x10) = 0;
    if (bVar3) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
  }
  puVar2 = PTR_DAT_02712d18;
  puVar4 = *(undefined8 **)PTR_DAT_02712d18;
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712a90;
    (**(code **)*puVar4)(puVar4);
    FUN_00404870(uVar1,puVar4);
    *(undefined8 *)puVar2 = 0;
  }
  return;
}


