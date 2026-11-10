/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e192a0; name: FUN_00e192a0
 */


void FUN_00e192a0(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02710848;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x110) == lVar2) {
    puVar3 = (undefined8 *)(param_1 + 0x110);
  }
  else if (*(long *)(param_1 + 0x118) == lVar2) {
    puVar3 = (undefined8 *)(param_1 + 0x118);
  }
  else if (*(long *)(param_1 + 0x120) == lVar2) {
    puVar3 = (undefined8 *)(param_1 + 0x120);
  }
  else if (*(long *)(param_1 + 0x128) == lVar2) {
    puVar3 = (undefined8 *)(param_1 + 0x128);
  }
  else if (*(long *)(param_1 + 0x130) == lVar2) {
    puVar3 = (undefined8 *)(param_1 + 0x130);
  }
  else if (*(long *)(param_1 + 0x138) == lVar2) {
    puVar3 = (undefined8 *)(param_1 + 0x138);
  }
  else {
    if (*(long *)(param_1 + 0x140) != lVar2) {
      return;
    }
    puVar3 = (undefined8 *)(param_1 + 0x140);
  }
  *puVar3 = 0;
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x1e8);
  if (lVar4 == 0) {
    FUN_015c5e40(0,param_2);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_015c5e40(lVar4,param_2);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00e193dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


