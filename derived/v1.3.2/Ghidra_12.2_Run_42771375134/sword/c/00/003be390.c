/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be390; name: FUN_003be390
 */


void FUN_003be390(long *param_1,long param_2,byte *param_3)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  bVar4 = *(byte *)((long)param_1 + 0x2c);
  bVar5 = *param_3;
  if (bVar5 != bVar4) {
    lVar11 = *param_1;
    *(byte *)((long)param_1 + 0x2c) = bVar5;
    bVar7 = bVar5 & (bVar4 & 1) == 0;
    if (lVar11 != 0) {
      if ((bVar4 & 0x10) != (*param_3 & 0x10)) {
        FUN_003bfe30(lVar11);
      }
      if (bVar7 == 0) {
        if ((bVar4 & (bVar5 & 1) == 0) != 0) {
          puVar8 = (undefined8 *)param_1[0x16];
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)((long)puVar8 + 0x2c);
            *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar8 + 4);
            *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)((long)puVar8 + 0x24);
            *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(puVar8 + 5);
            *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(puVar8 + 6);
            *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)((long)puVar8 + 0x34);
            *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar8 + 7);
            *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)puVar8 + 0x3c);
            *(int *)(param_2 + 0x224) = *(int *)(param_2 + 0x224) + -1;
            *puVar8 = *(undefined8 *)(param_2 + 0x230);
            *(undefined8 **)(param_2 + 0x230) = puVar8;
            param_1[0x16] = 0;
          }
          FUN_003bfd50(lVar11);
        }
      }
      else {
        FUN_003bdd30(param_1,param_2,1,0);
        FUN_003bfcc0(lVar11);
      }
      if ((bVar4 & 0x20) != (*param_3 & 0x20)) {
        lVar10 = *(long *)(lVar11 + 0x48);
        cVar6 = *(char *)(*(long *)(lVar11 + 0x50) + 0xd);
        uVar3 = *(uint *)(lVar11 + 0xb0);
        if ((bVar4 & 0x20) == 0) {
          if (cVar6 == '\x04') {
            lVar9 = 0x1f80;
          }
          else {
            lVar9 = 0x1f70;
          }
          FUN_00190b50((long *)(lVar10 + lVar9),(uVar3 >> 6) + 1);
          lVar10 = *(long *)(lVar10 + lVar9);
          lVar9 = (ulong)(uVar3 >> 0xb) * 4;
          *(uint *)(lVar10 + lVar9) = *(uint *)(lVar10 + lVar9) | 1 << (ulong)(uVar3 >> 6 & 0x1f);
          uVar1 = *(ushort *)(lVar11 + 0x7c) | 0x40;
        }
        else {
          plVar2 = (long *)(lVar10 + 0x1f80);
          if (cVar6 != '\x04') {
            plVar2 = (long *)(lVar10 + 0x1f70);
          }
          lVar10 = (ulong)(uVar3 >> 0xb) * 4;
          *(uint *)(*plVar2 + lVar10) =
               *(uint *)(*plVar2 + lVar10) & (1 << (ulong)(uVar3 >> 6 & 0x1f) ^ 0xffffffffU);
          uVar1 = *(ushort *)(lVar11 + 0x7c) & 0xffbf;
        }
        *(ushort *)(lVar11 + 0x7c) = uVar1;
      }
    }
    if (bVar7 != 0) {
      FUN_003be660(param_1);
    }
    if (lVar11 != 0) {
      if (((bVar4 & 3) != 3) && ((*param_3 & 3) == 3)) {
        FUN_003bf7e0(lVar11);
        return;
      }
      if (((*param_3 & 3) != 3) && ((bVar4 & 3) == 3)) {
        FUN_003bf4b0(lVar11);
        return;
      }
    }
  }
  return;
}


