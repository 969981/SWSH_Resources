/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b3b70; name: FUN_006b3b70
 */


void FUN_006b3b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  size_t sVar4;
  int *piVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *param_1;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  piVar5 = (int *)*param_3;
  uVar8 = 0xcbf29ce484222645;
  *param_2 = piVar5;
  param_2[1] = 0xcbf29ce484222645;
  *(undefined8 *)((long)param_2 + 0x25) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = &DAT_01d38550;
  lVar9 = 0;
  if (4 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
    uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
    if (uVar7 == 0) {
      lVar9 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar5 + uVar7);
      lVar9 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  sVar4 = strlen((char *)(lVar9 + 4));
  bVar2 = *(byte *)(lVar9 + 4);
  if (bVar2 != 0) {
    pbVar6 = (byte *)(lVar9 + 5);
    do {
      uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  param_2[1] = uVar8;
  param_2[2] = (char *)(lVar9 + 4);
  param_2[3] = sVar4;
  param_2[4] = 0;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


