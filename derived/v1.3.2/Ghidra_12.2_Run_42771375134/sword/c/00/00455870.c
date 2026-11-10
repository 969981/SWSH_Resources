/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00455870; name: FUN_00455870
 */


void FUN_00455870(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_02712ae8;
  for (plVar4 = *(long **)(param_1 + 0xd8); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    plVar3 = (long *)FUN_00435260(*(undefined8 *)puVar2,*(undefined4 *)(plVar4 + 1),1);
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(param_1 + 0x164) & 7;
      if (bVar1 == 2) {
        FUN_00455740(plVar3,*(undefined4 *)(param_1 + 0x10));
      }
      else if (bVar1 == 1) {
        FUN_00455390(*(undefined4 *)((long)plVar4 + 0xc),plVar3,*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(plVar4 + 2),*(undefined4 *)(plVar4 + 3),
                     *(undefined4 *)((long)plVar4 + 0x1c));
      }
      else if ((*(byte *)(param_1 + 0x164) & 7) == 0) {
        FUN_004555c0(plVar3,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)((long)plVar4 + 0x14),
                     *(undefined4 *)(plVar4 + 3),*(undefined4 *)((long)plVar4 + 0x1c));
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return;
}


