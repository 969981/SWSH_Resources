/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048df70; name: FUN_0048df70
 */


void FUN_0048df70(long *param_1)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  uVar2 = *(ushort *)((long)param_1 + 0x16c);
  if ((uVar2 & 3) == 0) {
    *(undefined4 *)(param_1 + 0x27) = 0x42ca0000;
  }
  else {
    lVar5 = param_1[0x2b];
    if (lVar5 != 0) {
      if ((uVar2 & 0xc) == 4) {
        if (((uVar2 >> 8 & 1) == 0) || ((*(byte *)(lVar5 + 0x4c) >> 4 & 1) != 0)) {
          if (*(int *)(param_1[5] + 0x40) == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = **(long **)(param_1[5] + 0x38);
          }
          uVar4 = FUN_004959d0();
          fVar6 = (float)FUN_004bedb0(lVar5 + 0x20,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0048e054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0xb0))
                    (fVar6 / *(float *)(**(long **)(param_1[5] + 0x38) + 0x40),param_1);
          return;
        }
      }
      else if (param_1[0x23] != 0) {
        bVar1 = *(byte *)(lVar5 + 0x4c);
        FUN_0048a460(param_1[0x23],bVar1 >> 6 & 1);
        if ((bVar1 >> 6 & 1) != 0) {
          if (((*(byte *)(param_1[0x23] + 0x28) >> 1 & 1) != 0) &&
             (uVar3 = FUN_00489f70(), (uVar3 & 1) != 0)) {
            FUN_0044f530(param_1 + 3);
            return;
          }
        }
      }
    }
  }
  return;
}


