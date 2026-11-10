/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddb880; name: thunk_FUN_00db6220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00db6220(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  param_1[0x67] = param_1[0x17];
  param_1[0x66] = param_1[0x16];
  param_1[0x69] =
       CONCAT44((float)((ulong)param_1[0x67] >> 0x20) - (float)((ulong)param_1[0x65] >> 0x20),
                (float)param_1[0x67] - (float)param_1[0x65]);
  param_1[0x68] =
       CONCAT44((float)((ulong)param_1[0x66] >> 0x20) - (float)((ulong)param_1[100] >> 0x20),
                (float)param_1[0x66] - (float)param_1[100]);
  if (((long *)param_1[0x3d] != (long *)param_1[0x3e]) &&
     (plVar2 = *(long **)param_1[0x3d], (char)plVar2[0xd] == '\0')) {
    (**(code **)(*plVar2 + 0x48))();
  }
  puVar6 = (undefined8 *)param_1[0x56];
  for (puVar5 = (undefined8 *)param_1[0x55]; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_00db99d0(*puVar5);
  }
  if ((param_1[0x54] != 0) && (*(char *)(param_1[0x54] + 0x85) != '\0')) {
    fVar7 = *(float *)(param_1 + 0x50);
    plVar2 = param_1 + 0x44;
    fVar8 = (float)_DAT_01d4b580 * fVar7;
    fVar9 = (float)((ulong)_DAT_01d4b580 >> 0x20) * fVar7;
    fVar10 = (float)_UNK_01d4b588 * fVar7;
    fVar7 = (float)((ulong)_UNK_01d4b588 >> 0x20) * fVar7;
    FUN_006c5d20(&puStack_70,plVar2);
    lVar1 = lStack_50;
    lVar4 = param_1[0x54];
    puStack_70 = PTR_DAT_02715270 + 0x10;
    lStack_68 = *(long *)(lVar4 + 0x138);
    uStack_60 = *(undefined8 *)(lVar4 + 0x140);
    uStack_58 = *(undefined8 *)(lVar4 + 0x148);
    lStack_50 = *(long *)(lVar4 + 0x150);
    uStack_48 = *(undefined8 *)(lVar4 + 0x158);
    uStack_40 = *(undefined8 *)(lVar4 + 0x160);
    memmove(param_1 + 0x45,(void *)(lVar4 + 0x138),0x30);
    FUN_006c5c80(&puStack_70);
    FUN_006c5d20(&puStack_70,plVar2);
    lVar4 = lStack_50;
    lStack_78 = lStack_50;
    uVar3 = FUN_006c5d60(plVar2);
    if ((uVar3 & 1) == 0) {
      param_1[0x4f] =
           CONCAT44((float)((ulong)param_1[0x17] >> 0x20) - fVar7,(float)param_1[0x17] - fVar10);
      param_1[0x4e] =
           CONCAT44((float)((ulong)param_1[0x16] >> 0x20) - fVar9,(float)param_1[0x16] - fVar8);
    }
    else {
      FUN_006c5d20(&puStack_70,plVar2);
      param_1[0x4f] = lStack_68;
      param_1[0x4e] = (long)puStack_70;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      if (lVar4 != lVar1) {
        (**(code **)(*param_1 + 0x38))(param_1,&lStack_78);
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    param_1[0x17] =
         CONCAT44(fVar7 + (float)((ulong)param_1[0x4f] >> 0x20),fVar10 + (float)param_1[0x4f]);
    param_1[0x16] =
         CONCAT44(fVar9 + (float)((ulong)param_1[0x4e] >> 0x20),fVar8 + (float)param_1[0x4e]);
  }
  *(undefined1 *)((long)param_1 + 0x1c6) = 0;
  return;
}


