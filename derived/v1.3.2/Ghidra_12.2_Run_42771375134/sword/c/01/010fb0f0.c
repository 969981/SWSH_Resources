/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fb0f0; name: FUN_010fb0f0
 */


void FUN_010fb0f0(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined2 uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong local_a8;
  ulong local_a0 [8];
  
  lVar6 = *param_1;
  if ((((lVar6 != 0) && (lVar8 = param_1[1], lVar8 != 0)) && (lVar9 = param_1[2], lVar9 != 0)) &&
     (((param_1[4] != 0 && (lVar10 = param_1[5], lVar10 != 0)) &&
      ((lVar13 = param_1[6], lVar13 != 0 &&
       ((lVar12 = param_1[7], lVar12 != 0 && (lVar11 = param_1[3], lVar11 != 0)))))))) {
    uVar3 = FUN_01547c00(lVar11);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_01547c10(param_1[3]);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_01547c20(param_1[3]);
        if ((((uVar3 & 1) == 0) && (uVar3 = FUN_01547c30(param_1[3]), (uVar3 & 1) == 0)) &&
           (uVar3 = FUN_01547c40(param_1[3]), (uVar3 & 1) != 0)) {
          FUN_014ca220(lVar9,0xc,*(undefined4 *)(lVar11 + 0x30),7,0,1);
        }
      }
      else {
        FUN_014c9900(lVar9,8,*(undefined2 *)(lVar11 + 0x30),*(undefined2 *)(lVar11 + 0x32));
      }
    }
    else {
      uVar4 = *(undefined2 *)(lVar11 + 0x30);
      uVar2 = *(undefined1 *)(lVar11 + 99);
      uVar7 = 0xcbf29ce484222645;
      FUN_014c8280(lVar9,0,uVar4);
      FUN_014c7fe0(lVar9,0xb,uVar2,uVar4);
      local_a0[6] = 0;
      local_a0[7] = 0;
      local_a0[4] = 0;
      local_a0[5] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      FUN_014add90(local_a0,0x3f,*(undefined2 *)(lVar11 + 0x30),*(undefined2 *)(lVar11 + 0x32));
      uVar3 = local_a0[0] & 0xff;
      local_a8 = 0xcbf29ce484222645;
      if ((byte)local_a0[0] != '\0') {
        local_a8 = 0xcbf29ce484222645;
        pbVar5 = (byte *)((ulong)local_a0 | 1);
        do {
          local_a8 = (local_a8 ^ uVar3) * 0x100000001b3;
          bVar1 = *pbVar5;
          uVar3 = (ulong)bVar1;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
      }
      FUN_0077eb10(lVar13,&local_a8,lVar8);
      FUN_014c7a10(lVar9,1,lVar8,0,0);
      local_a0[6] = 0;
      local_a0[7] = 0;
      uVar4 = 0;
      local_a0[4] = 0;
      local_a0[5] = 0;
      local_a0[2] = 0;
      local_a0[3] = 0;
      local_a0[0] = 0;
      local_a0[1] = 0;
      if (*(short *)(lVar11 + 0x30) != 0x97) {
        uVar4 = *(undefined2 *)(lVar11 + 0x32);
      }
      FUN_014ade50(local_a0,0x3f,*(short *)(lVar11 + 0x30),uVar4,0);
      if ((byte)local_a0[0] != 0) {
        pbVar5 = (byte *)((ulong)local_a0 | 1);
        bVar1 = (byte)local_a0[0];
        do {
          uVar7 = (uVar7 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
      }
      local_a8 = uVar7;
      FUN_0077eb10(lVar12,&local_a8,lVar8);
      FUN_014c7a10(lVar9,2,lVar8,0,0);
      FUN_0077d520(lVar8,lVar11 + 0x48);
      FUN_014c9110(lVar9,3,lVar8,*(undefined1 *)(lVar11 + 0x34),*(undefined1 *)(lVar11 + 0x62));
      FUN_014c9660(lVar9,4,*(undefined4 *)(lVar11 + 0x38));
      FUN_014c9660(lVar9,5,*(undefined4 *)(lVar11 + 0x3c));
      FUN_014c9660(lVar9,6,*(undefined4 *)(lVar11 + 0x40));
      FUN_014c9660(lVar9,7,*(undefined4 *)(lVar11 + 0x44));
      FUN_014c9900(lVar9,9,*(undefined2 *)(lVar11 + 0x10),1);
    }
    FUN_014ca220(lVar9,10,*(byte *)(lVar11 + 0xf) + 1,2,0,1);
    FUN_0077e740(lVar10,*(undefined2 *)(param_1[3] + 10),lVar8);
    FUN_014c62d0(lVar9,lVar6,lVar8);
  }
  return;
}


