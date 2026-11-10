/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009cb540; name: FUN_009cb540
 */


void FUN_009cb540(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_007b5710(*(undefined8 *)PTR_DAT_027104b0);
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar3 = *(long *)(lVar1 + 0x48) << 3;
      puVar2 = *(undefined8 **)(lVar1 + 0x40);
      do {
        FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x2a0),*puVar2);
        lVar3 = lVar3 + -8;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34b8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34b8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34b8) = 0;
    }
    *(undefined8 *)(param_1 + 0x34b8) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34c0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34c0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34c0) = 0;
    }
    *(undefined8 *)(param_1 + 0x34c0) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34c8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34c8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34c8) = 0;
    }
    *(undefined8 *)(param_1 + 0x34c8) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34d0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34d0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34d0) = 0;
    }
    *(undefined8 *)(param_1 + 0x34d0) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34d8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34d8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34d8) = 0;
    }
    *(undefined8 *)(param_1 + 0x34d8) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34e0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34e0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34e0) = 0;
    }
    *(undefined8 *)(param_1 + 0x34e0) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34e8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34e8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34e8) = 0;
    }
    *(undefined8 *)(param_1 + 0x34e8) = local_28;
    lVar3 = *(long *)(param_1 + 0xd8);
    lVar1 = *(long *)(lVar3 + 0x100);
    *(long *)(lVar3 + 0x100) = lVar1 + 1;
    FUN_009cfe00(&local_28,lVar3 + 0xd0,lVar1,0,0);
    if (*(long *)(param_1 + 0x34f0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x34f0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x34f0) = 0;
    }
    *(undefined8 *)(param_1 + 0x34f0) = local_28;
    FUN_009cb820(*(undefined8 *)(param_1 + 0xd8),0,1);
    *(long *)(*(long *)(param_1 + 0xd8) + 0x2c0) = param_1;
    lVar1 = *(long *)(param_1 + 0xd8);
    if (*(long *)(lVar1 + 0x2a8) != 0) {
      *(long *)(*(long *)(lVar1 + 0x2a8) + 0x168) = param_1 + 8;
      lVar1 = *(long *)(param_1 + 0xd8);
    }
    if (*(long *)(lVar1 + 0x2b0) != 0) {
      *(long *)(*(long *)(lVar1 + 0x2b0) + 0x168) = param_1 + 0x10;
    }
    *(undefined8 *)(param_1 + 0x3450) = 0;
    if (*(long *)(param_1 + 0x34b0) != 0) {
      FUN_009dd160();
    }
  }
  return;
}


