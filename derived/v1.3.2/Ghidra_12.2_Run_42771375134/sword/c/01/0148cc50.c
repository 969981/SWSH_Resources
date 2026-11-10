/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148cc50; name: FUN_0148cc50
 */


/* WARNING: Removing unreachable block (ram,0x0148cde0) */
/* WARNING: Removing unreachable block (ram,0x0148ce14) */

void FUN_0148cc50(long param_1,ulong param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  code *local_a8;
  long alStack_90 [12];
  
  lVar3 = *(long *)(param_1 + 0x600);
  if (lVar3 != 0) {
    if ((param_2 & 1) == 0) {
      local_a8 = *(code **)(lVar3 + 0x138);
      if (local_a8 == (code *)0x0) goto LAB_0148cd3c;
      plVar1 = (long *)(lVar3 + 0x150);
      *(undefined8 *)(lVar3 + 0x140) = 0;
      *(undefined8 *)(lVar3 + 0x148) = 0;
      *(undefined8 *)(lVar3 + 0x130) = 0;
      *(undefined8 *)(lVar3 + 0x138) = 0;
    }
    else {
      pcVar2 = *(code **)(lVar3 + 0x138);
      local_a8 = FUN_0148ed80;
      alStack_90[0] = param_1;
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x140) = 0;
        *(undefined8 *)(lVar3 + 0x148) = 0;
        *(undefined8 *)(lVar3 + 0x130) = 0;
        *(undefined8 *)(lVar3 + 0x138) = 0;
        (*pcVar2)(lVar3 + 0x150);
      }
      FUN_0148ed90(alStack_90,lVar3 + 0x150);
      *(undefined1 **)(lVar3 + 0x148) = &LAB_0148eda0;
      *(code **)(lVar3 + 0x138) = FUN_0148ed80;
      *(code **)(lVar3 + 0x140) = FUN_0148ed90;
      *(undefined8 *)(lVar3 + 0x130) = &LAB_0148ed20;
      *(undefined8 *)(*(long *)(param_1 + 0x600) + 0xa8) = 0x2000000000000;
      plVar1 = alStack_90;
    }
    (*local_a8)(plVar1);
  }
LAB_0148cd3c:
  lVar3 = *(long *)(param_1 + 0x608);
  if (lVar3 != 0) {
    if ((param_2 & 1) == 0) {
      pcVar2 = *(code **)(lVar3 + 0x138);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x140) = 0;
        *(undefined8 *)(lVar3 + 0x148) = 0;
        *(undefined8 *)(lVar3 + 0x130) = 0;
        *(undefined8 *)(lVar3 + 0x138) = 0;
        (*pcVar2)(lVar3 + 0x150);
      }
    }
    else {
      pcVar2 = *(code **)(lVar3 + 0x138);
      alStack_90[0] = param_1;
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x140) = 0;
        *(undefined8 *)(lVar3 + 0x148) = 0;
        *(undefined8 *)(lVar3 + 0x130) = 0;
        *(undefined8 *)(lVar3 + 0x138) = 0;
        (*pcVar2)(lVar3 + 0x150);
      }
      FUN_0148efc0(alStack_90,lVar3 + 0x150);
      *(undefined1 **)(lVar3 + 0x148) = &LAB_0148efd0;
      *(code **)(lVar3 + 0x138) = FUN_0148efb0;
      *(code **)(lVar3 + 0x140) = FUN_0148efc0;
      *(undefined8 *)(lVar3 + 0x130) = &LAB_0148edb0;
      *(undefined8 *)(*(long *)(param_1 + 0x608) + 0xa8) = 0x400000000;
      FUN_0148efb0(alStack_90);
    }
  }
  return;
}


