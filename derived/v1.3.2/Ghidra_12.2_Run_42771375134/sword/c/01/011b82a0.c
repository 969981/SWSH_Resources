/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b82a0; name: FUN_011b82a0
 */


ulong FUN_011b82a0(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w19;
  ulong uVar4;
  ulong local_50;
  ulong local_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  uVar4 = 0;
  if (param_3 == 0) {
LAB_011b82f0:
    uVar4 = 0;
  }
  else if (0x1f < param_4) {
    if (5 < *(uint *)(param_3 + 0xc)) {
      uVar4 = 0;
      uVar3 = 0;
      goto LAB_011b8404;
    }
    local_50 = *(ulong *)(&DAT_021676b0 + (long)(int)*(uint *)(param_3 + 0xc) * 8);
    if (local_50 < param_4) goto LAB_011b82f0;
    local_48 = param_4;
    lStack_40 = param_3;
    lVar1 = FUN_011b8e40(auStack_38,param_2,&lStack_40,&local_48,&local_50);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar1 + 0x60) == 0) {
      uVar4 = 0;
    }
    else {
      unaff_w19 = *(uint *)(*(long *)(lVar1 + 0x60) + 0xc);
      uVar4 = FUN_011b8150(param_1,unaff_w19);
      if ((uVar4 & 0xff) == 0) {
        lVar2 = 0;
        if (*param_1 != 0) {
          if (param_1[1] == 0) {
            lVar2 = 1;
          }
          else if (param_1[2] == 0) {
            lVar2 = 2;
          }
          else if (param_1[3] == 0) {
            lVar2 = 3;
          }
          else if (param_1[4] == 0) {
            lVar2 = 4;
          }
          else {
            if (param_1[5] != 0) {
              uVar4 = 0;
              goto LAB_011b83f0;
            }
            lVar2 = 5;
          }
        }
        uVar4 = lVar2 << 3;
      }
      else {
        uVar4 = uVar4 >> 0x1d & 0x7fffffff8;
      }
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      lVar2 = *(long *)((long)param_1 + uVar4);
      *(long *)((long)param_1 + uVar4) = lVar1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      uVar4 = 1;
    }
LAB_011b83f0:
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  uVar3 = (ulong)unaff_w19 << 0x20;
LAB_011b8404:
  return uVar3 | uVar4;
}


