/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e9560; name: FUN_007e9560
 */


void FUN_007e9560(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  string *psVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  string *psVar5;
  ulong uVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  string *psVar9;
  
  uVar6 = (long)param_3 - (long)param_2 >> 3;
  lVar2 = param_1[2];
  psVar5 = (string *)*param_1;
  if ((ulong)((lVar2 - (long)psVar5 >> 3) * -0x5555555555555555) < uVar6) {
    if (psVar5 != (string *)0x0) {
      if ((string *)param_1[1] == psVar5) {
        psVar1 = psVar5;
      }
      else {
        psVar1 = (string *)param_1[1];
        do {
          psVar9 = psVar1 + -0x18;
          if (((byte)*psVar9 & 1) != 0) {
            operator_delete(*(void **)(psVar1 + -8));
          }
          psVar1 = psVar9;
        } while (psVar5 != psVar9);
        psVar1 = (string *)*param_1;
      }
      param_1[1] = psVar5;
      operator_delete(psVar1);
      lVar2 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar4 = 0xaaaaaaaaaaaaaaa;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar2 >> 3) * -0x5555555555555555) < 0x555555555555555) {
      uVar3 = (lVar2 >> 3) * 0x5555555555555556;
      uVar4 = uVar6;
      if (uVar6 <= uVar3) {
        uVar4 = uVar3;
      }
    }
    psVar5 = operator_new(uVar4 * 0x18);
    param_1[2] = psVar5 + uVar4 * 0x18;
    *param_1 = psVar5;
    param_1[1] = psVar5;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      std::string::string(psVar5,(string *)*param_2);
      psVar5 = (string *)(param_1[1] + 0x18);
      param_1[1] = psVar5;
    }
  }
  else {
    lVar2 = param_1[1] - (long)psVar5 >> 3;
    uVar4 = lVar2 * -0x5555555555555555;
    puVar7 = param_2 + lVar2 * 0xaaaaaaaaaaaaaab;
    if (uVar6 <= uVar4) {
      puVar7 = param_3;
    }
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      std::string::operator=(psVar5,(string *)*param_2);
      psVar5 = psVar5 + 0x18;
    }
    if (uVar4 < uVar6) {
      if (puVar7 != param_3) {
        psVar5 = (string *)param_1[1];
        do {
          puVar8 = puVar7 + 1;
          std::string::string(psVar5,(string *)*puVar7);
          psVar5 = (string *)(param_1[1] + 0x18);
          param_1[1] = psVar5;
          puVar7 = puVar8;
        } while (param_3 != puVar8);
      }
    }
    else {
      if ((string *)param_1[1] != psVar5) {
        psVar1 = (string *)param_1[1];
        do {
          psVar9 = psVar1 + -0x18;
          if (((byte)*psVar9 & 1) != 0) {
            operator_delete(*(void **)(psVar1 + -8));
          }
          psVar1 = psVar9;
        } while (psVar5 != psVar9);
      }
      param_1[1] = psVar5;
    }
  }
  return;
}


