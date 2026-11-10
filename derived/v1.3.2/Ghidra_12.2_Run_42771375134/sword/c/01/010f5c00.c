/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5c00; name: FUN_010f5c00
 */


void FUN_010f5c00(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_70 [3];
  long local_58;
  
  FUN_00ff86a0(local_70,*(undefined8 *)(param_2 + 0xb0),0);
  lVar3 = *(long *)(local_70[0] + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  plVar1 = *(long **)(param_2 + 0x80);
  for (plVar5 = *(long **)(param_2 + 0x78); plVar1 != plVar5; plVar5 = plVar5 + 1) {
    FUN_006cf0c0(local_70,*plVar5 + 0x5c0);
    lVar4 = local_70[0];
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar4 == 0x2651d5ef7b32db44) {
      if (*(long **)(param_2 + 0x80) == plVar5) goto LAB_010f5d08;
      goto LAB_010f5cd0;
    }
  }
  plVar5 = plVar1;
  if (*(long **)(param_2 + 0x80) != plVar1) {
LAB_010f5cd0:
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      uVar2 = FUN_010f5fe0(lVar4 + 0x50);
      if ((uVar2 & 1) == 0) {
        lVar4 = 0;
      }
      *param_1 = lVar4;
      *(long *)(lVar4 + 0x6f8) = lVar3;
      goto joined_r0x010f5d14;
    }
  }
LAB_010f5d08:
  *param_1 = 0;
  lRam00000000000006f8 = lVar3;
joined_r0x010f5d14:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


