/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfcc50; name: FUN_00dfcc50
 */


void FUN_00dfcc50(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_78;
  long local_70 [2];
  char *pcStack_60;
  undefined8 local_58;
  ulong local_50 [3];
  long local_38;
  
  *(undefined4 *)(param_1 + 0xcbc) = *(undefined4 *)(param_1 + 0xcc0);
  FUN_00a658b0(local_70,param_1 + 0x50);
  if (local_70[0] != 0) {
    if (*(int *)(*(long *)(local_70[0] + 0x4c0) + 0x54) != 3) {
      FUN_00e90180(&local_78);
      lVar4 = *param_2;
      if (lVar4 != local_78) {
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar2 = *(long *)(param_1 + 0xd60);
        *(long *)(param_1 + 0xd60) = lVar4;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
        lVar4 = local_70[0];
        memmove((void *)(param_1 + 0xce0),(void *)(local_70[0] + 0x600),0x34);
        FUN_00e90000(lVar4,param_1 + 0xcd0);
        lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        local_50[0] = local_50[0] & 0xffffffffffff0000;
        FUN_016b1290(*(undefined8 *)(*(long *)(lVar4 + 0x60) + 0x630),local_70 + 4);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        FUN_00deff50(local_70 + 4,param_2);
        uVar1 = local_50[0];
        uVar3 = FUN_015b5230(local_50[0] + 0x50);
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        if (local_50[0] != 0) {
          (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
          local_50[0] = 0;
        }
        if (uVar1 != 0) {
          *(undefined1 *)(uVar1 + 0xb80) = 1;
        }
        lVar4 = *(long *)PTR_DAT_027107a8;
        local_70[1] = 0x21617f453b3afcfb;
        pcStack_60 = "Set_State_On";
        local_58 = 0xc;
        FUN_006cf0a0(local_70 + 4,local_70 + 1);
        FUN_008962c0(lVar4 + 0x108,local_70 + 4);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        *(undefined4 *)(param_1 + 0xcb8) = 1;
        lVar4 = local_78;
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        local_78 = 0;
      }
      if (local_70[0] == 0) {
        return;
      }
    }
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


