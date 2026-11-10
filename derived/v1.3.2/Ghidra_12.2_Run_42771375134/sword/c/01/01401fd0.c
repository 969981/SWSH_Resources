/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01401fd0; name: FUN_01401fd0
 */


void FUN_01401fd0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  FUN_008c0720(*(undefined8 *)(param_1 + 0x80),0);
  FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x640);
  uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0xc4);
  puVar2 = PTR_DAT_02710798;
  *(undefined4 *)(param_1 + 0x550) = 0;
  lVar5 = *(long *)(*(long *)puVar2 + 0x1d8);
  if (lVar5 == 0) {
    FUN_01520b70(0,uVar3);
    iVar1 = *(int *)(param_1 + 0x570);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_01520b70(lVar5,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
    (**(code **)(*plVar6 + 0x18))(plVar6);
    iVar1 = *(int *)(param_1 + 0x570);
  }
  if (iVar1 == 4) {
    FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
  }
  pcVar4 = *(code **)(param_1 + 0xd8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar4)(param_1 + 0xf0);
  }
  *(long *)(param_1 + 0xf0) = param_1;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_01405e90;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01405ea0;
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01405eb0;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01405ec0;
  *(undefined4 *)(param_1 + 0x570) = 8;
  return;
}


