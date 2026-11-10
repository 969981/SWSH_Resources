/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed39d0; name: FUN_00ed39d0
 */


void FUN_00ed39d0(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  ulong local_40;
  byte *pbStack_38;
  undefined8 local_30;
  long local_28;
  
  pbStack_38 = (byte *)(param_1 + 0xe0);
  bVar1 = *pbStack_38;
  local_40 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    pbVar3 = (byte *)(param_1 + 0xe1);
    do {
      local_40 = (local_40 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_30 = 0x3f;
  local_28 = 0;
  lVar4 = *(long *)(param_2 + 0x88);
  if (lVar4 == 0) {
    FUN_010672e0(&local_48,0,0);
    uVar2 = FUN_00fc6ad0(&local_40);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_010672e0(&local_48,lVar4,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    uVar2 = FUN_00fc6ad0(&local_40);
  }
  if ((uVar2 & 1) == 0) {
    if ((long)local_40 < -0x247bbdf3d1cf57b6) {
      if (((local_40 != 0x9a3df7d37db70b41) && (local_40 != 0xbe2a23d3926c354d)) &&
         (local_40 != 0xd21509a8fafab5ed)) goto LAB_00ed3bc0;
    }
    else if ((long)local_40 < 0x4bfdbfcd09095ca0) {
      if ((local_40 != 0xdb84420c2e30a84a) && (local_40 != 0xf5142f0c3c8ca51f)) {
LAB_00ed3bc0:
        if (local_40 == 0xdf864be11fd1f902) {
          FUN_01052900(local_48,2);
        }
        else {
          FUN_01052900(local_48,1);
        }
        goto joined_r0x00ed3bfc;
      }
    }
    else if ((local_40 != 0x4bfdbfcd09095ca0) && (local_40 != 0x5513fccd0e4dc3d1))
    goto LAB_00ed3bc0;
  }
  FUN_01052900(local_48,2);
joined_r0x00ed3bfc:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


