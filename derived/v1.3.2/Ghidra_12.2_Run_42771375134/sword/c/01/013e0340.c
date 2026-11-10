/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e0340; name: FUN_013e0340
 */


void FUN_013e0340(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long local_38;
  long local_28;
  
  lVar8 = *(long *)(param_1 + 0x60);
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))((undefined8 *)(lVar8 + 0x50));
  lVar5 = FUN_0132d9a0();
  do {
    if (plVar4 == (long *)0x0) {
      lVar8 = 0;
      lVar5 = lRam00000000000003a8;
joined_r0x013e05b4:
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      FUN_0132f7f0(&local_28,lVar8);
      uVar2 = FUN_01329830(local_28);
      FUN_012ed890(lVar5,uVar2 & 1);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      lVar5 = *(long *)(lVar8 + 0x3d0);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      FUN_0132f7f0(&local_28,lVar8);
      uVar6 = FUN_01329850(local_28);
      FUN_0136b3a0(lVar5,uVar6);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      lVar5 = *(long *)(lVar8 + 0x3a0);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      FUN_0132f7f0(&local_28,lVar8);
      uVar7 = FUN_01329820(local_28);
      if ((uVar7 & 1) == 0) {
        FUN_0132f7f0(&local_38,lVar8);
        uVar2 = FUN_01329830(local_38);
        FUN_013140e0(lVar5,~uVar2 & 1);
        lVar1 = 0;
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
          lVar1 = local_38;
        }
      }
      else {
        FUN_013140e0(lVar5,1);
        lVar1 = local_38;
      }
      local_38 = lVar1;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      lVar5 = *(long *)(lVar8 + 0x368);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      FUN_0132f7f0(&local_28,lVar8);
      uVar6 = FUN_01329850(local_28);
      FUN_0132f7f0(&local_38,lVar8);
      uVar3 = FUN_01329860(local_38);
      FUN_0136ac60(lVar5,uVar6,uVar3);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      return;
    }
    if (plVar4 == (long *)lVar5) {
      lVar5 = *(long *)(lVar8 + 0x3a8);
      goto joined_r0x013e05b4;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


