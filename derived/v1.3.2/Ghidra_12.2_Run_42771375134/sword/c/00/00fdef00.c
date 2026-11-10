/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdef00; name: FUN_00fdef00
 */


void FUN_00fdef00(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  float __y;
  code *pcVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0 [12];
  
  if (*(int *)(param_1 + 0x5cc) != 2) {
    lVar2 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02162190);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    uVar5 = *param_2;
    uVar7 = *param_3;
    fVar6 = (float)((ulong)uVar5 >> 0x20);
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    fVar3 = (float)FUN_00a81e00(fVar8 - fVar6);
    __y = DAT_01d4bef8;
    fVar3 = fVar3 + DAT_01d4c2f4;
    fVar4 = fmodf(fVar3,DAT_01d4bef8);
    if (fVar3 < 0.0) {
      fVar4 = fmodf(fVar4 + __y,__y);
    }
    *(ulong *)(lVar2 + 0x30) = CONCAT44((fVar6 + fVar8) * 0.5,((float)uVar5 + (float)uVar7) * 0.5);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(float *)(lVar2 + 0x44) = fVar4;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
    FUN_00ffd510(param_1 + 0x100,&DAT_02162198);
    *(undefined4 *)(param_1 + 0x5cc) = 2;
    local_d0 = &LAB_00fdf2e0;
    local_c8 = FUN_00fdf3b0;
    local_c0 = &LAB_00fdf3c0;
    local_b8 = &LAB_00fdf3d0;
    local_b0[0] = param_1;
    FUN_00ffd120(param_1 + 0x100,&DAT_021621a0,&local_d0);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      local_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar1)(local_b0);
    }
  }
  return;
}


