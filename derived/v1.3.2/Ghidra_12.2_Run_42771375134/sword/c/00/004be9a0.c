/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be9a0; name: FUN_004be9a0
 */


void FUN_004be9a0(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  FUN_00433a50();
  puVar3 = PTR_DAT_027134a8;
  puVar2 = PTR_DAT_02712a90;
  plVar4 = *(long **)(PTR_DAT_027134a8 + 0x10);
  while (plVar4 != (long *)0x0) {
    if (plVar4[0x32] == 0) {
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined8 *)(puVar3 + 0x10) = 0;
    }
    else {
      *(long *)(puVar3 + 0x10) = plVar4[0x32];
    }
    *(int *)puVar3 = *(int *)puVar3 + -1;
    (**(code **)*plVar4)(plVar4,0,1);
    FUN_00468090(plVar4);
    (**(code **)(*plVar4 + 0x20))(plVar4,0);
    uVar1 = *(undefined4 *)puVar2;
    (**(code **)(*plVar4 + 8))(plVar4);
    FUN_00404870(uVar1,plVar4);
    plVar4 = *(long **)(puVar3 + 0x10);
  }
  *(undefined4 *)puVar3 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  FUN_004bead0(PTR_DAT_027134a0);
  puVar2 = PTR_DAT_02712df8;
  if (*(long *)PTR_DAT_02712df8 != 0) {
    *(undefined4 *)(PTR_DAT_02712df8 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  puVar2 = PTR_DAT_027134b0;
  if (*(long *)PTR_DAT_027134b0 != 0) {
    *(undefined4 *)(PTR_DAT_027134b0 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  return;
}


