/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e0340; name: FUN_012e0340
 */


void FUN_012e0340(float param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  long local_48;
  undefined4 local_40;
  float local_3c;
  long local_38;
  
  plVar2 = *(long **)(param_2 + 0xa8);
  plVar4 = *(long **)(param_2 + 0xb0);
  if ((plVar2 != plVar4) && (*plVar2 != param_3)) {
    do {
      plVar2 = plVar2 + 0x60;
      if (plVar4 == plVar2) {
        return;
      }
    } while (*plVar2 != param_3);
  }
  if (((plVar2 != plVar4) && (plVar2 != (long *)0x0)) && (plVar2[0x4c] != 0)) {
    local_38 = param_3;
    lVar1 = FUN_00794780();
    if (lVar1 != 0) {
      FUN_019d67f0(lVar1,1);
    }
    FUN_007946a0(plVar2[0x4c],1);
    lVar1 = FUN_00794780(plVar2[0x4c]);
    fVar5 = *(float *)(plVar2 + 0x5e);
    *(ulong *)(lVar1 + 0x128) = (ulong)(uint)fVar5;
    *(ulong *)(lVar1 + 0x120) = CONCAT44(fVar5,fVar5);
    *(ulong *)(lVar1 + 0x148) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xf8) >> 0x20) * 0.0,
                  (float)*(undefined8 *)(lVar1 + 0xf8) * fVar5);
    *(ulong *)(lVar1 + 0x140) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0xf0) >> 0x20) * fVar5,
                  (float)*(undefined8 *)(lVar1 + 0xf0) * fVar5);
    if (0.0 < param_1) {
      plVar2 = *(long **)(param_2 + 0xd8);
      plVar4 = *(long **)(param_2 + 0xe0);
      if ((plVar2 != plVar4) && (*plVar2 != param_3)) {
        do {
          plVar2 = plVar2 + 2;
          if (plVar4 == plVar2) goto LAB_012e0454;
        } while (*plVar2 != param_3);
      }
      if (plVar2 == plVar4) {
LAB_012e0454:
        local_40 = 0;
        local_48 = param_3;
        local_3c = param_1;
        if (plVar4 < *(long **)(param_2 + 0xe8)) {
          uVar3 = *(undefined8 *)(param_2 + 0xf0);
          lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar3;
          *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
          *plVar4 = local_48;
          plVar4[1] = CONCAT44(local_3c,local_40);
          *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
          *(long *)(param_2 + 0xe0) = *(long *)(param_2 + 0xe0) + 0x10;
          param_3 = local_38;
        }
        else {
          FUN_012e1a10((undefined8 *)(param_2 + 0xd8),&local_48);
        }
      }
      else {
        *(undefined4 *)(plVar2 + 1) = 0;
        *(float *)((long)plVar2 + 0xc) = param_1;
      }
    }
    FUN_012e0500(param_2,param_3,0);
  }
  return;
}


