/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007fc500; name: FUN_007fc500
 */


void FUN_007fc500(long *param_1,string *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar9;
  byte *pbVar8;
  string *this;
  string *psVar10;
  string *psVar11;
  byte *pbVar12;
  ulong uVar13;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar13 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar13 = uVar1;
    if (uVar1 <= uVar7) {
      uVar13 = uVar7;
    }
    if (uVar13 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_007fc584;
    }
  }
  pvVar4 = operator_new(uVar13 * 0x18);
LAB_007fc584:
  this = (string *)((long)pvVar4 + lVar5 * 8);
  pvVar4 = (void *)((long)pvVar4 + uVar13 * 0x18);
  std::string::string(this,param_2);
  pbVar12 = (byte *)*param_1;
  pbVar9 = (byte *)param_1[1];
  psVar10 = this;
  if ((byte *)param_1[1] == pbVar12) {
    *param_1 = (long)this;
    param_1[1] = (long)(this + 0x18);
    param_1[2] = (long)pvVar4;
  }
  else {
    do {
      pbVar8 = pbVar9 + -0x18;
      uVar2 = *(undefined8 *)(pbVar9 + -0x10);
      uVar3 = *(undefined8 *)(pbVar9 + -8);
      psVar11 = psVar10 + -0x18;
      *(undefined8 *)psVar11 = *(undefined8 *)pbVar8;
      *(undefined8 *)(psVar10 + -0x10) = uVar2;
      *(undefined8 *)(psVar10 + -8) = uVar3;
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      pbVar9[-0x10] = 0;
      pbVar9[-0xf] = 0;
      pbVar9[-0xe] = 0;
      pbVar9[-0xd] = 0;
      pbVar9[-0xc] = 0;
      pbVar9[-0xb] = 0;
      pbVar9[-10] = 0;
      pbVar9[-9] = 0;
      pbVar9[-8] = 0;
      pbVar9[-7] = 0;
      pbVar9[-6] = 0;
      pbVar9[-5] = 0;
      pbVar9[-4] = 0;
      pbVar9[-3] = 0;
      pbVar9[-2] = 0;
      pbVar9[-1] = 0;
      pbVar9 = pbVar8;
      psVar10 = psVar11;
    } while (pbVar12 != pbVar8);
    pbVar12 = (byte *)*param_1;
    pbVar9 = (byte *)param_1[1];
    *param_1 = (long)psVar11;
    param_1[1] = (long)(this + 0x18);
    param_1[2] = (long)pvVar4;
    if (pbVar9 != pbVar12) {
      do {
        pbVar8 = pbVar9 + -0x18;
        if ((*pbVar8 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + -8));
        }
        pbVar9 = pbVar8;
      } while (pbVar12 != pbVar8);
    }
  }
  if (pbVar12 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar12);
  return;
}


