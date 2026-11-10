/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0950; name: FUN_003e0950
 */


void FUN_003e0950(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  byte local_48 [8];
  
  FUN_003fdcd0(*(undefined8 *)(param_1 + 0x1100));
  FUN_0011e980(*(undefined8 *)(param_1 + 0x720));
  if (*(int *)(param_1 + 0x8e8) != 0) {
    uVar4 = 0;
    do {
      FUN_003aaed0(*(undefined8 *)(*(long *)(param_1 + 0x8e0) + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x8e8));
  }
  *(long *)(param_1 + 0x1340) = param_2[2];
  FUN_003ff570(*(undefined8 *)(param_1 + 0x13d0));
                    /* try { // try from 003e09c0 to 003e09c3 has its CatchHandler @ 003e0b7c */
  FUN_003ff470(param_1 + 0x1348);
  *(undefined1 *)(param_1 + 0x13c8) = 1;
                    /* try { // try from 003e09d4 to 003e09d7 has its CatchHandler @ 003e0b78 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x13d0));
  *(long *)(param_1 + 0x1548) = param_2[2];
  FUN_003ff570(*(undefined8 *)(param_1 + 0x15d8));
                    /* try { // try from 003e09f0 to 003e09f3 has its CatchHandler @ 003e0b64 */
  FUN_003ff470(param_1 + 0x1550);
  *(undefined1 *)(param_1 + 0x15d0) = 1;
                    /* try { // try from 003e0a04 to 003e0a07 has its CatchHandler @ 003e0b60 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 0x15d8));
  *(undefined4 *)(param_1 + 0x1b78) = 1;
  *(long **)(param_1 + 0x1b70) = param_2;
  lVar1 = param_1 + 7000;
  (**(code **)(*param_2 + 0x20))(param_2);
  *(undefined8 *)(param_1 + 0x1b68) = *(undefined8 *)(*(long *)(param_1 + 0x1b70) + 0x10);
  *(undefined4 *)(param_1 + 0x1a98) = 1;
  *(long *)(param_1 + 0x1a90) = lVar1;
  (**(code **)(*(long *)(param_1 + 7000) + 0x20))(lVar1);
  *(undefined8 *)(param_1 + 0x1a88) = *(undefined8 *)(*(long *)(param_1 + 0x1a90) + 0x10);
  plVar2 = (long *)(param_1 + 0x1538);
  FUN_003e0450(param_1,plVar2);
  if (*(long *)(param_1 + 0x928) != 0) {
    lVar6 = *(long *)(param_1 + 0x8f8);
    uVar4 = 0;
    do {
      if (*(uint *)(param_1 + 0x924) <= uVar4) {
        plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x928) + 0x20))
                                   (*(undefined4 *)(param_1 + 0x7b8),*(long **)(param_1 + 0x928),
                                    plVar2);
        plVar5 = (long *)(param_1 + 0x12c0);
        *(undefined4 *)(param_1 + 0x12e0) = 1;
        *(long **)(param_1 + 0x12d8) = plVar2;
        (**(code **)(*plVar2 + 0x20))();
        *(undefined8 *)(param_1 + 0x12d0) = *(undefined8 *)(*(long *)(param_1 + 0x12d8) + 0x10);
        pcVar3 = *(code **)(*plVar2 + 0x28);
        goto LAB_003e0b0c;
      }
      FUN_003b17c0(local_48,*(undefined8 *)(lVar6 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while ((local_48[0] >> 3 & 1) == 0);
  }
  pcVar3 = *(code **)(*plVar2 + 0x20);
  plVar5 = plVar2;
LAB_003e0b0c:
  (*pcVar3)(plVar2);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (**(code **)(**(long **)(param_1 + 0x1b68) + 0xa0))(*(long **)(param_1 + 0x1b68),lVar1);
  (**(code **)(**(long **)(param_1 + 0x1a88) + 0xa0))(*(long **)(param_1 + 0x1a88),param_1 + 0x1a78)
  ;
  return;
}


