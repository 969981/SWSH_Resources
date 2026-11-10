/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e29a0; name: FUN_004e29a0
 */


void FUN_004e29a0(long param_1,long *param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined2 local_78;
  char local_76;
  uint local_74;
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + 0xf0;
  FUN_004e3600(lVar1,auStack_70);
  FUN_004e3520(lVar1);
  puVar6 = PTR_DAT_02712a90;
  if (param_4 != 0) {
    uVar10 = 0;
    do {
      local_78 = 0xff00;
      uVar7 = FUN_004e38e0(lVar1,&local_78,&local_74);
      if (((uVar7 & 1) == 0) || (param_4 < local_74)) break;
      if ((char)local_78 == -0x50) {
        puVar9 = (undefined8 *)param_2[1];
        if (puVar9 != (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
          cVar4 = *(char *)(puVar9 + 1);
          cVar5 = -0x50;
          while( true ) {
            if (((cVar4 == -0x50) && (cVar5 == -0x50)) && (*(char *)((long)puVar9 + 10) == local_76)
               ) {
              puVar8 = (undefined8 *)puVar9[3];
              plVar2 = param_2 + 1;
              if ((undefined8 *)param_2[1] != puVar9) {
                plVar2 = puVar11 + 3;
              }
              *plVar2 = (long)puVar8;
              if ((undefined8 *)*param_2 == puVar9) {
                *param_2 = (long)puVar11;
              }
              uVar3 = *(undefined4 *)puVar6;
              FUN_004c2ce0(*puVar9);
              FUN_00404870(uVar3,puVar9);
            }
            else {
              puVar8 = (undefined8 *)puVar9[3];
              puVar11 = puVar9;
            }
            puVar9 = puVar8;
            if (puVar9 == (undefined8 *)0x0) break;
            cVar4 = *(char *)(puVar9 + 1);
            cVar5 = (char)local_78;
          }
        }
        FUN_004c2b30(param_1,param_2,&local_78,param_3,local_74,0,0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_4);
  }
  FUN_004e3630(lVar1,auStack_70);
  return;
}


