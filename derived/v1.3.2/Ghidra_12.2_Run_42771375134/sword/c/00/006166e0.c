/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006166e0; name: FUN_006166e0
 */


undefined4
FUN_006166e0(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 local_90;
  undefined4 local_88;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  long local_58;
  undefined1 *local_50;
  code *local_48;
  long local_40;
  undefined8 local_30;
  
  uVar2 = 6;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != (undefined8 *)0x0)) {
    local_50 = &LAB_00616960;
    local_48 = thunk_FUN_006028c0;
    local_70 = (undefined4)*param_3;
    local_90 = param_4;
    local_88 = param_5;
    local_78 = param_2;
    local_40 = param_1;
    iVar1 = FUN_006169a0(&local_90,0xf);
    if (iVar1 == 0) {
      iVar1 = FUN_00616c00(&local_90,4);
      if (iVar1 == 1) {
        *param_3 = local_68;
        if (local_58 == 0) {
          return 0;
        }
        if (local_48 == (code *)0x0) {
          return 0;
        }
        puVar5 = *(uint **)(local_58 + 0x20);
        if (puVar5 != (uint *)0x0) {
          uVar4 = *puVar5;
          if ((uVar4 & 0xfffffffe) == 4) {
            (*local_48)(local_40,*(undefined8 *)(puVar5 + 4));
            uVar4 = *puVar5;
          }
          if (uVar4 == 6) {
            (*local_48)(local_40,*(undefined8 *)(puVar5 + 2));
          }
          uVar3 = *(undefined8 *)(puVar5 + 0x10);
          *puVar5 = 0;
          puVar5[0xb] = 0;
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          *(undefined8 *)(puVar5 + 0x14) = uVar3;
          *(undefined8 *)(puVar5 + 0x16) = uVar3;
          if (*(code **)(puVar5 + 0x18) != (code *)0x0) {
            local_30 = (**(code **)(puVar5 + 0x18))(0,0,0);
            *(undefined8 *)(puVar5 + 0x1a) = local_30;
            uVar3 = *(undefined8 *)(puVar5 + 0x10);
          }
          (*local_48)(local_40,uVar3);
          (*local_48)(local_40,*(undefined8 *)(puVar5 + 0xe));
          (*local_48)(local_40,puVar5);
        }
        (*local_48)(local_40,local_58);
        return 0;
      }
      if ((local_58 != 0) && (local_48 != (code *)0x0)) {
        puVar5 = *(uint **)(local_58 + 0x20);
        if (puVar5 != (uint *)0x0) {
          uVar4 = *puVar5;
          if ((uVar4 & 0xfffffffe) == 4) {
            (*local_48)(local_40,*(undefined8 *)(puVar5 + 4));
            uVar4 = *puVar5;
          }
          if (uVar4 == 6) {
            (*local_48)(local_40,*(undefined8 *)(puVar5 + 2));
          }
          uVar3 = *(undefined8 *)(puVar5 + 0x10);
          *puVar5 = 0;
          puVar5[0xb] = 0;
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          *(undefined8 *)(puVar5 + 0x14) = uVar3;
          *(undefined8 *)(puVar5 + 0x16) = uVar3;
          if (*(code **)(puVar5 + 0x18) != (code *)0x0) {
            local_30 = (**(code **)(puVar5 + 0x18))(0,0,0);
            *(undefined8 *)(puVar5 + 0x1a) = local_30;
            uVar3 = *(undefined8 *)(puVar5 + 0x10);
          }
          (*local_48)(local_40,uVar3);
          (*local_48)(local_40,*(undefined8 *)(puVar5 + 0xe));
          (*local_48)(local_40,puVar5);
        }
        (*local_48)(local_40,local_58);
      }
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = iVar1 + 5;
      }
      uVar2 = 0;
      if (uVar4 < 3) {
        return (&DAT_021353a8)[(int)uVar4];
      }
    }
    else {
      uVar2 = 6;
    }
  }
  return uVar2;
}


