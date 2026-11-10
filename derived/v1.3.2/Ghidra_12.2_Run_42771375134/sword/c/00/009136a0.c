/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009136a0; name: FUN_009136a0
 */


void FUN_009136a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined1 local_58 [4];
  char local_54 [4];
  
  *param_1 = 0x5001f05001f0500;
  *(undefined4 *)(param_1 + 1) = 0x1f05001f;
  *(undefined2 *)((long)param_1 + 0xc) = 0x500;
  *(undefined1 *)((long)param_1 + 0xe) = 0x1f;
  if (*(int *)(param_1 + 7) != 0) {
    uVar6 = 0;
    do {
      puVar7 = (undefined1 *)((long)param_1 + 0x3c);
      if (param_1[6] != 0) {
        puVar7 = (undefined1 *)(param_1[6] + uVar6);
      }
      *puVar7 = 5;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 7));
  }
  uVar3 = FUN_008f8c50(param_2);
  uVar6 = 0;
  pcVar8 = (char *)((long)param_1 + 1);
  do {
    uVar4 = FUN_008f8d50(param_2,uVar6 & 0xffffffff);
    if ((((uVar4 & 1) != 0) && (pcVar8[-1] == '\0')) &&
       (cVar1 = FUN_008f96b0(param_2,uVar6 & 0xffffffff), cVar1 != '\x05')) {
      pcVar8[-1] = '\x01';
      *pcVar8 = cVar1;
      pcVar8[1] = '\x1f';
    }
    uVar6 = uVar6 + 1;
    pcVar8 = pcVar8 + 3;
  } while ((uVar3 & 0xff) + 1 != uVar6);
  uVar3 = 0;
  pbVar9 = (byte *)((long)param_1 + 2);
LAB_009137a8:
  do {
    FUN_008f8e50(param_2,uVar3 & 0xffffffff,local_54,local_58);
    if (local_54[0] != '\x05') {
      lVar5 = FUN_008df3d0(param_3,local_54[0],local_58[0]);
      if ((lVar5 != 0) && (uVar4 = FUN_008e1600(), (uVar4 & 1) == 0)) {
        bVar2 = FUN_008e0a00(lVar5);
        *pbVar9 = bVar2;
        puVar7 = (undefined1 *)((long)param_1 + 0x3c);
        if ((param_1[6] != 0) && ((uint)bVar2 < *(uint *)(param_1 + 7))) {
          puVar7 = (undefined1 *)(param_1[6] + (ulong)bVar2);
        }
        *puVar7 = (char)uVar3;
        uVar3 = uVar3 + 1;
        pbVar9 = pbVar9 + 3;
        if (uVar6 == uVar3) {
          return;
        }
        goto LAB_009137a8;
      }
      *pbVar9 = 0x1f;
    }
    uVar3 = uVar3 + 1;
    pbVar9 = pbVar9 + 3;
    if (uVar6 == uVar3) {
      return;
    }
  } while( true );
}


