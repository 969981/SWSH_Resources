/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a05c00; name: FUN_00a05c00
 */


/* WARNING: Removing unreachable block (ram,0x00a05d68) */
/* WARNING: Removing unreachable block (ram,0x00a05e18) */

void FUN_00a05c00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lStack_c0;
  undefined4 local_b8;
  undefined8 local_58;
  
  lVar3 = param_1 + 0x100;
  lVar1 = FUN_00ffdd70(lVar3,&DAT_021537b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x6b8);
  *(long *)(param_1 + 0x6b8) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    lVar1 = *(long *)(param_1 + 0x6b8);
  }
  if (lVar1 != 0) {
    FUN_016b7990(lVar1,&DAT_02153758 + (long)*(int *)(param_1 + 0x6a8) * 8,1,0);
    lVar1 = *(long *)(param_1 + 0x6b8);
    pcVar4 = *(code **)(lVar1 + 0xb8);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0xc0) = 0;
      *(undefined8 *)(lVar1 + 200) = 0;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
      *(undefined8 *)(lVar1 + 0xb8) = 0;
      (*pcVar4)(lVar1 + 0xd0);
    }
    *(long *)(lVar1 + 0xd0) = param_1;
    *(undefined8 *)(lVar1 + 0xb0) = &LAB_00a069b0;
    *(undefined1 **)(lVar1 + 0xb8) = &LAB_00a06a80;
    *(undefined1 **)(lVar1 + 0xc0) = &LAB_00a06a90;
    *(undefined1 **)(lVar1 + 200) = &LAB_00a06aa0;
    local_58 = FUN_016b7950(*(undefined8 *)(param_1 + 0x6b8),&DAT_02153758);
    lVar1 = FUN_00ffda40(lVar3,&local_58);
    local_b8 = 0;
    pcVar4 = *(code **)(lVar1 + 0x158);
    lStack_c0 = param_1;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x160) = 0;
      *(undefined8 *)(lVar1 + 0x168) = 0;
      *(undefined8 *)(lVar1 + 0x150) = 0;
      *(undefined8 *)(lVar1 + 0x158) = 0;
      (*pcVar4)(lVar1 + 0x170);
    }
    FUN_00a06b20(&lStack_c0,lVar1 + 0x170);
    *(undefined1 **)(lVar1 + 0x168) = &LAB_00a06b30;
    *(code **)(lVar1 + 0x158) = FUN_00a06b10;
    *(code **)(lVar1 + 0x160) = FUN_00a06b20;
    *(undefined8 *)(lVar1 + 0x150) = &LAB_00a06ab0;
    FUN_00a06b10(&lStack_c0);
    local_58 = FUN_016b7950(*(undefined8 *)(param_1 + 0x6b8),&DAT_02153760);
    lVar1 = FUN_00ffda40(lVar3,&local_58);
    local_b8 = 1;
    pcVar4 = *(code **)(lVar1 + 0x158);
    lStack_c0 = param_1;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x160) = 0;
      *(undefined8 *)(lVar1 + 0x168) = 0;
      *(undefined8 *)(lVar1 + 0x150) = 0;
      *(undefined8 *)(lVar1 + 0x158) = 0;
      (*pcVar4)(lVar1 + 0x170);
    }
    FUN_00a06b20(&lStack_c0,lVar1 + 0x170);
    *(undefined1 **)(lVar1 + 0x168) = &LAB_00a06b30;
    *(code **)(lVar1 + 0x158) = FUN_00a06b10;
    *(code **)(lVar1 + 0x160) = FUN_00a06b20;
    *(undefined8 *)(lVar1 + 0x150) = &LAB_00a06ab0;
    FUN_00a06b10(&lStack_c0);
  }
  FUN_00a06510(param_1,&DAT_021537b8,2,&DAT_02153768);
  FUN_00a06510(param_1,&DAT_021537c0,3,PTR_DAT_02718d90);
  lVar1 = FUN_00ffda40(lVar3,&DAT_021537c8);
  if (lVar1 != 0) {
    pcVar4 = *(code **)(lVar1 + 0x158);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x160) = 0;
      *(undefined8 *)(lVar1 + 0x168) = 0;
      *(undefined8 *)(lVar1 + 0x150) = 0;
      *(undefined8 *)(lVar1 + 0x158) = 0;
      (*pcVar4)(lVar1 + 0x170);
    }
    *(long *)(lVar1 + 0x170) = param_1;
    *(undefined4 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 0x150) = &LAB_00a06bc0;
    *(undefined1 **)(lVar1 + 0x158) = &LAB_00a06c10;
    *(undefined1 **)(lVar1 + 0x160) = &LAB_00a06c20;
    *(undefined1 **)(lVar1 + 0x168) = &LAB_00a06c30;
    *(undefined8 *)(lVar1 + 0xf8) = 0x20000000;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x6c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  *(long *)(param_1 + 0x6c8) = lVar1;
  lVar1 = FUN_00ffda40(lVar3,&DAT_021537d0);
  if (lVar1 != 0) {
    pcVar4 = *(code **)(lVar1 + 0x158);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x160) = 0;
      *(undefined8 *)(lVar1 + 0x168) = 0;
      *(undefined8 *)(lVar1 + 0x150) = 0;
      *(undefined8 *)(lVar1 + 0x158) = 0;
      (*pcVar4)(lVar1 + 0x170);
    }
    *(long *)(lVar1 + 0x170) = param_1;
    *(undefined4 *)(lVar1 + 0x178) = 1;
    *(undefined8 *)(lVar1 + 0x150) = &LAB_00a06bc0;
    *(undefined1 **)(lVar1 + 0x158) = &LAB_00a06c10;
    *(undefined1 **)(lVar1 + 0x160) = &LAB_00a06c20;
    *(undefined1 **)(lVar1 + 0x168) = &LAB_00a06c30;
    *(undefined8 *)(lVar1 + 0xf8) = 0x80000000;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x6c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c0) = 0;
  }
  *(long *)(param_1 + 0x6c0) = lVar1;
  lVar3 = FUN_00ffdef0(lVar3,&DAT_021537d8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x6d0);
  *(long *)(param_1 + 0x6d0) = lVar3;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  return;
}


