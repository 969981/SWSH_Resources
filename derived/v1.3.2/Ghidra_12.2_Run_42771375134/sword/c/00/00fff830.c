/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fff830; name: FUN_00fff830
 */


void FUN_00fff830(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar1 = PTR_DAT_02710860;
  puVar7 = (undefined8 *)*param_1;
  if (param_4 != 0) {
    param_3 = param_3 + 0xb0;
    do {
      uVar6 = *param_2;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar6 = *puVar7;
      *(undefined8 *)(param_3 + -0xa0) = 0;
      *(undefined8 *)(param_3 + -0x90) = 0;
      *(undefined8 *)(param_3 + -0x88) = 0;
      *(undefined8 *)(param_3 + -0xb0) = uVar6;
      *(undefined8 *)(param_3 + -0x98) = 0;
      if ((code *)puVar7[5] != (code *)0x0) {
        (*(code *)puVar7[5])(puVar7 + 6,param_3 + -0x80);
        uVar3 = puVar7[2];
        uVar6 = puVar7[3];
        uVar5 = puVar7[5];
        *(undefined8 *)(param_3 + -0x90) = puVar7[4];
        *(undefined8 *)(param_3 + -0x88) = uVar5;
        *(undefined8 *)(param_3 + -0xa0) = uVar3;
        *(undefined8 *)(param_3 + -0x98) = uVar6;
        pcVar4 = (code *)puVar7[3];
        if (pcVar4 != (code *)0x0) {
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          (*pcVar4)(puVar7 + 6);
        }
      }
      param_4 = param_4 + -1;
      *(undefined8 *)(param_3 + -0x20) = 0;
      *(undefined8 *)(param_3 + -0x10) = 0;
      *(undefined8 *)(param_3 + -8) = 0;
      *(undefined8 *)(param_3 + -0x18) = 0;
      if ((code *)puVar7[0x15] != (code *)0x0) {
        (*(code *)puVar7[0x15])(puVar7 + 0x16,param_3);
        uVar3 = puVar7[0x12];
        uVar6 = puVar7[0x13];
        uVar5 = puVar7[0x15];
        *(undefined8 *)(param_3 + -0x10) = puVar7[0x14];
        *(undefined8 *)(param_3 + -8) = uVar5;
        *(undefined8 *)(param_3 + -0x20) = uVar3;
        *(undefined8 *)(param_3 + -0x18) = uVar6;
        pcVar4 = (code *)puVar7[0x13];
        if (pcVar4 != (code *)0x0) {
          puVar7[0x14] = 0;
          puVar7[0x15] = 0;
          puVar7[0x12] = 0;
          puVar7[0x13] = 0;
          (*pcVar4)(puVar7 + 0x16);
        }
      }
      puVar7 = puVar7 + 0x22;
      param_3 = param_3 + 0x110;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    } while (param_4 != 0);
  }
  *param_1 = (long)puVar7;
  return;
}


