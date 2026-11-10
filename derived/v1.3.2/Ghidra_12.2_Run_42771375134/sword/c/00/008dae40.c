/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dae40; name: FUN_008dae40
 */


long FUN_008dae40(undefined8 *param_1,uint param_2,char param_3,uint param_4,long param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  long lStack_58;
  
  lVar6 = FUN_008db990(param_5);
  uVar7 = FUN_008dba30(param_5);
  if (((((((uVar7 & 1) == 0) || (uVar7 = FUN_008dba40(param_5), (uVar7 & 1) != 0)) &&
        (uVar7 = FUN_008dba50(param_5), (uVar7 & 1) == 0)) &&
       ((param_3 == '\t' || (cVar1 = FUN_008db9d0(param_5), cVar1 == param_3)))) &&
      ((sVar2 = FUN_008db9b0(param_5), sVar2 == 0 ||
       (uVar3 = FUN_008db9b0(param_5), (uVar3 & 0xffff) < *(uint *)(param_1 + 0xf))))) &&
     ((uVar7 = FUN_008dba10(param_5), (uVar7 & 1) != 0 &&
      (((param_2 & 0xffff) != 0x91 || (uVar7 = FUN_008dba60(param_5), (uVar7 & 1) != 0)))))) {
    lVar8 = FUN_008dba70(param_5);
    cVar1 = FUN_008dba80(param_5);
    if (cVar1 != '\0') {
      uVar3 = 0;
      puVar11 = (undefined8 *)(lVar8 + 8);
      do {
        if ((uint)*(ushort *)(puVar11 + -1) == (param_2 & 0xffff)) {
          if (((param_4 & 1) != 0) &&
             (uVar7 = FUN_008db080(param_1,param_5,param_2), (uVar7 & 1) != 0)) {
            return lVar6;
          }
          FUN_008dbb20(param_5,1);
          local_98 = *param_1;
          local_90 = param_1[1];
          local_88 = param_1[2];
          local_80 = param_1[3];
          local_78 = param_1[4];
          local_70 = param_1[5];
          local_60 = param_1[0xe];
          pcVar10 = (code *)*puVar11;
          puStack_68 = param_1;
          lStack_58 = param_5;
          uVar5 = FUN_008db9f0(param_5);
          (*pcVar10)(&local_98,uVar5);
          uVar7 = FUN_008dba40(param_5);
          if ((uVar7 & 1) == 0) {
            FUN_008dbb20(param_5,0);
            uVar7 = FUN_008dba20(param_5);
          }
          else {
            FUN_008db8b0(param_5);
            uVar7 = FUN_008dba20(param_5);
          }
          if ((uVar7 & 1) == 0) {
            return lVar6;
          }
          while ((lVar6 != 0 && (uVar7 = FUN_008dba10(lVar6), (uVar7 & 1) == 0))) {
            lVar6 = FUN_008db990(param_5);
          }
          if (param_5 == 0) {
            return lVar6;
          }
          uVar7 = FUN_008dba10(param_5);
          if ((uVar7 & 1) == 0) {
            return lVar6;
          }
          uVar7 = FUN_008dba30(param_5);
          if ((uVar7 & 1) == 0) {
            uVar9 = FUN_00931990(param_1[1]);
            FUN_008dcfc0(uVar9,param_5);
            return lVar6;
          }
          FUN_008dbb00(param_5,1);
          return lVar6;
        }
        uVar3 = uVar3 + 1;
        uVar4 = FUN_008dba80(param_5);
        puVar11 = puVar11 + 2;
      } while (uVar3 < (uVar4 & 0xff));
    }
  }
  return lVar6;
}


