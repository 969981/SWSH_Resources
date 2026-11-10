/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01512760; name: FUN_01512760
 */


void FUN_01512760(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_01512b50();
  FUN_01512be0(&local_50,param_2);
  plVar1 = local_50;
  local_50 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0x9f0);
  *(long **)(param_1 + 0x9f0) = plVar1;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0xa08) = local_38;
    *(undefined8 *)(param_1 + 0xa00) = local_40;
    *(long **)(param_1 + 0x9f8) = local_48;
    local_50 = (long *)0x0;
    if (*(long *)(param_1 + 0x68) != 0) goto LAB_01512898;
LAB_01512924:
    lVar6 = 0;
    if (*(long *)(param_1 + 0x178) != 0) goto LAB_015128a8;
LAB_01512930:
    if (*(long *)(param_1 + 0x288) != 0) goto LAB_015128bc;
LAB_01512940:
    if (*(long *)(param_1 + 0x398) != 0) goto LAB_015128d0;
LAB_01512950:
    if (*(long *)(param_1 + 0x4a8) != 0) goto LAB_015128e4;
LAB_01512960:
    if (*(long *)(param_1 + 0x5b8) != 0) goto LAB_015128f8;
LAB_01512970:
    lVar4 = 0;
  }
  else {
    plVar1 = (long *)plVar5[5];
    while (plVar1 != (long *)0x0) {
      lVar6 = *plVar1;
      (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],plVar1,0x20,8);
      plVar1 = (long *)lVar6;
    }
    lVar6 = *plVar5;
    *plVar5 = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar6,plVar5[1] << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x9f8) + 0x18))
              (*(long **)(param_1 + 0x9f8),plVar5,*(undefined8 *)(param_1 + 0xa00),
               *(undefined8 *)(param_1 + 0xa08));
    plVar1 = local_50;
    *(undefined8 *)(param_1 + 0xa08) = local_38;
    *(undefined8 *)(param_1 + 0xa00) = local_40;
    *(long **)(param_1 + 0x9f8) = local_48;
    local_50 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar5 = (long *)plVar1[5];
      while (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        (**(code **)(*(long *)plVar1[6] + 0x18))((long *)plVar1[6],plVar5,0x20,8);
        plVar5 = (long *)lVar6;
      }
      lVar6 = *plVar1;
      *plVar1 = 0;
      if (lVar6 != 0) {
        (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],lVar6,plVar1[1] << 3,8);
      }
      (**(code **)(*local_48 + 0x18))(local_48,plVar1,local_40,local_38);
    }
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_01512924;
LAB_01512898:
    lVar6 = FUN_006e72a0();
    lVar6 = lVar6 << 0x20;
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_01512930;
LAB_015128a8:
    lVar4 = FUN_006e72a0();
    lVar6 = (lVar4 << 0x20) + lVar6;
    if (*(long *)(param_1 + 0x288) == 0) goto LAB_01512940;
LAB_015128bc:
    lVar4 = FUN_006e72a0();
    lVar6 = (lVar4 << 0x20) + lVar6;
    if (*(long *)(param_1 + 0x398) == 0) goto LAB_01512950;
LAB_015128d0:
    lVar4 = FUN_006e72a0();
    lVar6 = (lVar4 << 0x20) + lVar6;
    if (*(long *)(param_1 + 0x4a8) == 0) goto LAB_01512960;
LAB_015128e4:
    lVar4 = FUN_006e72a0();
    lVar6 = (lVar4 << 0x20) + lVar6;
    if (*(long *)(param_1 + 0x5b8) == 0) goto LAB_01512970;
LAB_015128f8:
    lVar4 = FUN_006e72a0();
    lVar4 = lVar4 << 0x20;
  }
  FUN_01513930(*(long *)(param_1 + 0x9f0),
               (long)((float)(ulong)(lVar4 + lVar6 >> 0x20) /
                     *(float *)(*(long *)(param_1 + 0x9f0) + 0x50)));
  FUN_01512d00(&local_50,param_2);
  plVar1 = local_50;
  local_50 = (long *)0x0;
  plVar5 = *(long **)(param_1 + 0xa10);
  *(long **)(param_1 + 0xa10) = plVar1;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0xa28) = local_38;
    *(undefined8 *)(param_1 + 0xa20) = local_40;
    *(long **)(param_1 + 0xa18) = local_48;
    local_50 = (long *)0x0;
    if (*(long *)(param_1 + 0x6c8) != 0) goto LAB_01512aac;
LAB_01512afc:
    iVar2 = 0;
    if (*(long *)(param_1 + 0x7d8) == 0) {
      iVar3 = 0;
      goto LAB_01512ac0;
    }
  }
  else {
    plVar1 = (long *)plVar5[5];
    while (plVar1 != (long *)0x0) {
      lVar6 = *plVar1;
      (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],plVar1,0x20,8);
      plVar1 = (long *)lVar6;
    }
    lVar6 = *plVar5;
    *plVar5 = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)plVar5[2] + 0x18))((long *)plVar5[2],lVar6,plVar5[1] << 3,8);
    }
    (**(code **)(**(long **)(param_1 + 0xa18) + 0x18))
              (*(long **)(param_1 + 0xa18),plVar5,*(undefined8 *)(param_1 + 0xa20),
               *(undefined8 *)(param_1 + 0xa28));
    plVar1 = local_50;
    *(undefined8 *)(param_1 + 0xa28) = local_38;
    *(undefined8 *)(param_1 + 0xa20) = local_40;
    *(long **)(param_1 + 0xa18) = local_48;
    local_50 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      plVar5 = (long *)plVar1[5];
      while (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        (**(code **)(*(long *)plVar1[6] + 0x18))((long *)plVar1[6],plVar5,0x20,8);
        plVar5 = (long *)lVar6;
      }
      lVar6 = *plVar1;
      *plVar1 = 0;
      if (lVar6 != 0) {
        (**(code **)(*(long *)plVar1[2] + 0x18))((long *)plVar1[2],lVar6,plVar1[1] << 3,8);
      }
      (**(code **)(*local_48 + 0x18))(local_48,plVar1,local_40,local_38);
    }
    if (*(long *)(param_1 + 0x6c8) == 0) goto LAB_01512afc;
LAB_01512aac:
    iVar2 = FUN_006e72a0();
    iVar3 = 0;
    if (*(long *)(param_1 + 0x7d8) == 0) goto LAB_01512ac0;
  }
  iVar3 = FUN_006e72a0();
LAB_01512ac0:
  if (*(long *)(param_1 + 0x8e8) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_006e72a0();
    lVar6 = lVar6 << 0x20;
  }
  FUN_01514780(*(long *)(param_1 + 0xa10),
               (long)((float)(ulong)((long)(lVar6 + ((ulong)(uint)(iVar3 + iVar2) << 0x20)) >> 0x20)
                     / *(float *)(*(long *)(param_1 + 0xa10) + 0x50)));
  return;
}


