struct Transition {
	int currentState;
	char character;
	int nextState;
};

const Transition floatNum[] = {{1,'1',2},{1,'2',2},{1,'3',2},{1,'4',2},{1,'5',2},{1,'6',2},{1,'7',2},{1,'8',2},{1,'9',2},{1,'.',10},{1,'0',7},{2,'0',6},{2,'1',6},{2,'2',6},{2,'3',6},{2,'4',6},{2,'5',6},{2,'6',6},{2,'7',6},{2,'8',6},{2,'9',6},{2,' ',3},{2,',',3},{2,'.',110},{2,'e',8},{2,'E',8},{3,'0',4},{3,'1',4},{3,'2',4},{3,'3',4},{3,'4',4},{3,'5',4},{3,'6',4},{3,'7',4},{3,'8',4},{3,'9',4},{4,'0',5},{4,'1',5},{4,'2',5},{4,'3',5},{4,'4',5},{4,'5',5},{4,'6',5},{4,'7',5},{4,'8',5},{4,'9',5},{5,'0',11},{5,'1',11},{5,'2',11},{5,'3',11},{5,'4',11},{5,'5',11},{5,'6',11},{5,'7',11},{5,'8',11},{5,'9',11},{6,'0',2},{6,'1',2},{6,'2',2},{6,'3',2},{6,'4',2},{6,'5',2},{6,'6',2},{6,'7',2},{6,'8',2},{6,'9',2},{6,'.',110},{6,' ',3},{6,',',3},{6,'e',8},{6,'E',8},{7,'.',110},{7,'e',8},{7,'E',8},{8,'+',9},{8,'-',9},{8,'0',120},{8,'1',120},{8,'2',120},{8,'3',120},{8,'4',120},{8,'5',120},{8,'6',120},{8,'7',120},{8,'8',120},{8,'9',120},{9,'0',120},{9,'1',120},{9,'2',120},{9,'3',120},{9,'4',120},{9,'5',120},{9,'6',120},{9,'7',120},{9,'8',120},{9,'9',120},{10,'0',110},{10,'1',110},{10,'2',110},{10,'3',110},{10,'4',110},{10,'5',110},{10,'6',110},{10,'7',110},{10,'8',110},{10,'9',110},{11,' ', 3},{11,',',3},{11,'0',4},{11,'1',4},{11,'2',4},{11,'3',4},{11,'4',4},{11,'5',4},{11,'6',4},{11,'7',4},{11,'8',4},{11,'9',4},{11,'e',8},{11,'E',8},{11,'.',110},{110,'e',8},{110,'E',8},{110,'0',110},{110,'1',110},{110,'2',110},{110,'3',110},{110,'4',110},{110,'5',110},{110,'6',110},{110,'7',110},{110,'8',110},{110,'9',110},{120,'0',120},{120,'1',120},{120,'2',120},{120,'3',120},{120,'4',120},{120,'5',120},{120,'6',120},{120,'7',120},{120,'8',120},{120,'9',120},{0,0,0}};
