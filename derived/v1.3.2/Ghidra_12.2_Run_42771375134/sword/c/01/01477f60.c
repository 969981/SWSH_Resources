/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01477f60; name: FUN_01477f60
 */


void FUN_01477f60(long param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01477fcc:
    cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5e0) + 0x58);
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      plVar3 = (long *)FUN_0146e370();
      if (plVar2 == (long *)0x0) goto LAB_01477fcc;
      do {
        if (plVar2 == plVar3) {
          puVar7 = puVar7 + -10;
          cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5e0) + 0x58);
          goto joined_r0x01478034;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 0x88) + 0x5e0) + 0x58);
  }
  puVar7 = (undefined8 *)0x0;
joined_r0x01478034:
  if (cVar1 != '\0') {
    return;
  }
  uVar4 = FUN_010386e0();
  switch(*(undefined4 *)(param_1 + (uVar4 & 0xffffffff) * 4 + 0xb0)) {
  case 0:
    *(undefined4 *)(puVar7[0xc] + 0x14) = 5;
    lVar6 = *(long *)(param_1 + 0x90);
    cVar1 = *(char *)(lVar6 + 0x5cb);
    break;
  case 1:
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
    FUN_014712b0(*(undefined8 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x7c) = 2;
    lVar8 = *(long *)(*(long *)(param_1 + 0x90) + 0x740);
    FUN_006cf0a0(&local_50,&DAT_026a3668);
    lVar6 = local_38;
    *(undefined8 *)(lVar8 + 0x120) = local_50;
    *(undefined8 *)(lVar8 + 0x128) = local_48;
    *(undefined8 *)(lVar8 + 0x130) = local_40;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar8 + 0x138);
    *(long *)(lVar8 + 0x138) = lVar6;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    *(undefined4 *)(puVar7[0xc] + 0x14) = 0;
    FUN_01470b40(*(undefined8 *)(param_1 + 0x90));
    FUN_01479920(param_1,0x2ca894c06224607f,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(puVar7[0xc] + 0x10);
    return;
  case 2:
    *(undefined4 *)(puVar7[0xc] + 0x14) = 4;
    lVar6 = *(long *)(param_1 + 0x90);
    cVar1 = *(char *)(lVar6 + 0x5cb);
    break;
  case 3:
    FUN_01479c70(param_1);
    *(undefined4 *)(param_1 + 0x7c) = 4;
    FUN_014797a0(param_1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
    return;
  case 4:
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(puVar7[0xc] + 0x14) = 0;
    FUN_01471470(*(undefined8 *)(param_1 + 0x90),0);
    FUN_01470b40(*(undefined8 *)(param_1 + 0x90));
    lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x618);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
    return;
  default:
    goto switchD_01478004_default;
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(lVar6 + 0x5cb) = 1;
    FUN_006cf0a0(&local_50,&DAT_026a3650);
    FUN_016d3620(&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_010364c0(lVar6,1);
  }
  FUN_01037030(*(undefined8 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x7c) = 0xb;
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
switchD_01478004_default:
  return;
}


