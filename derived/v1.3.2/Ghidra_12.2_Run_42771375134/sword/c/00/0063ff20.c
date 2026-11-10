/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063ff20; name: FUN_0063ff20
 */


void FUN_0063ff20(long param_1,undefined8 param_2,int *param_3,int *param_4,long param_5,
                 long param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  undefined4 *puVar12;
  
  puVar6 = PTR_DAT_02714900;
  iVar2 = param_3[1];
  iVar8 = param_3[2];
  iVar3 = param_4[1];
  iVar4 = param_4[2];
  if (iVar2 <= iVar8 || iVar3 <= iVar4) {
    if (iVar2 <= iVar8) {
      puVar12 = (undefined4 *)(param_1 + (long)iVar2 * 4 + 0x1288);
      uVar11 = (long)iVar2;
      do {
        uVar9 = 1L << (uVar11 & 0x3f);
        if ((*(ulong *)(param_3 + 4) & uVar9) != 0) {
          uVar5 = *(uint *)(param_1 + (ulong)(puVar12[0x80] &
                                             ((int)puVar12[0x80] >> 0x1f ^ 0xffffffffU)) * 4 + 5000)
          ;
          uVar7 = (**(code **)puVar6)(param_2,*puVar12,uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
          *(undefined8 *)(param_5 + uVar11 * 8) = uVar7;
          iVar2 = (int)uVar11;
          if ((long)*(int *)(param_6 + 4) <= (long)uVar11) {
            iVar2 = *(int *)(param_6 + 4);
          }
          *(int *)(param_6 + 4) = iVar2;
          iVar2 = (int)uVar11;
          if ((long)uVar11 <= (long)*(int *)(param_6 + 8)) {
            iVar2 = *(int *)(param_6 + 8);
          }
          *(int *)(param_6 + 8) = iVar2;
          *(ulong *)(param_6 + 0x10) = *(ulong *)(param_6 + 0x10) | uVar9;
          iVar8 = param_3[2];
        }
        puVar12 = puVar12 + 1;
        bVar1 = (long)uVar11 < (long)iVar8;
        uVar11 = uVar11 + 1;
      } while (bVar1);
      param_3[1] = *param_3 + 1;
      param_3[2] = -1;
      param_3[4] = 0;
      param_3[5] = 0;
    }
    puVar6 = PTR_DAT_02714900;
    if (iVar3 <= iVar4) {
      if (param_4[1] <= param_4[2]) {
        uVar11 = (long)param_4[1];
        do {
          if ((*(ulong *)(param_4 + 4) & 1L << (uVar11 & 0x3f)) != 0) {
            uVar9 = 0;
            piVar10 = (int *)(param_1 + 0x1288);
            do {
              if ((piVar10[0x80] == (int)uVar11) && (0 < *piVar10)) {
                uVar7 = (**(code **)puVar6)(param_2,*piVar10,
                                            *(undefined4 *)(param_1 + uVar11 * 4 + 5000));
                *(undefined8 *)(param_5 + uVar9 * 8) = uVar7;
                iVar2 = (int)uVar9;
                if ((long)*(int *)(param_6 + 4) <= (long)uVar9) {
                  iVar2 = *(int *)(param_6 + 4);
                }
                *(int *)(param_6 + 4) = iVar2;
                iVar2 = (int)uVar9;
                if ((long)uVar9 <= (long)*(int *)(param_6 + 8)) {
                  iVar2 = *(int *)(param_6 + 8);
                }
                *(int *)(param_6 + 8) = iVar2;
                *(ulong *)(param_6 + 0x10) = *(ulong *)(param_6 + 0x10) | 1L << (uVar9 & 0x3f);
              }
              uVar9 = uVar9 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar9 != 0x40);
          }
          bVar1 = (long)uVar11 < (long)param_4[2];
          uVar11 = uVar11 + 1;
        } while (bVar1);
      }
      param_4[1] = *param_4 + 1;
      param_4[2] = -1;
      param_4[4] = 0;
      param_4[5] = 0;
    }
  }
  return;
}


